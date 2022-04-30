#include "execution/execution.h"
#include "api/api.h"

#include <stack>
#include <mutex>
#include "functions/functions.h"
#include "discord/headhunter_impl.hpp"


std::mutex mutex;
std::stack<std::string> script_queue;
std::uintptr_t original_func;

std::uint8_t roblox_encoder_t::encodeOp(const std::uint8_t opcode)
{
	return opcode * 227;
}

int __fastcall scheduler_cycle(std::uintptr_t waiting_scripts_job, int fakearg, int a2)
{
	headhunter_rpc_t::get().run_callback();

	std::unique_lock<std::mutex> guard{ mutex };
	std::uintptr_t rl = execution.scheduler->get_global_luastate();

	if (!script_queue.empty())
	{
		output << console::color::pink << "scheduler stepped!\n";
		const std::string bytecode = script_queue.top();
		script_queue.pop();
		guard.unlock();

		execution.register_globals();

		if (bytecode.at(0) == 0)
		{
			std::string error("[string \"headhunter.exe\"]");
			const char* msg = bytecode.c_str() + 1;
			//MessageBoxA(NULL, msg, "Script Error", NULL);
			rbx_output(1, (error + msg).c_str());
		}
		else
		{
			rbx_deserialize(rl, "headhunter.exe", bytecode.c_str(), bytecode.size());
			rbx_spawn(rl);
			rbx_decrement_top(rl, 1);
		}
	}

	return reinterpret_cast<int(__thiscall*)(std::uintptr_t, int)>(original_func)(waiting_scripts_job, a2);
}

void execution_t::hook_waiting_scripts_job() const
{
	this->scheduler->hook_waiting_scripts_job(scheduler_cycle, original_func);
	output << console::color::red << "Original function: 0x" << original_func << "\n";
}

void execution_t::run_script(const std::string& script) const
{
	roblox_encoder_t roblox_encoder{};
	const std::string& compiled = Luau::compile(script, {}, {}, &roblox_encoder); // no clone here, is gonna be cloned on queue
	std::unique_lock<std::mutex> guard{ mutex };
	script_queue.push(compiled);
}

void execution_t::run_bytecode(const std::string& bytecode) const
{
	std::unique_lock<std::mutex> guard{ mutex };
	script_queue.push(bytecode);
}

void execution_t::set_identity(std::int8_t identity) const
{
	rbx_setidentity(this->scheduler->get_global_luastate(), identity);
}

void execution_t::register_globals() const // make sure they get registered on the scheduler, maintain that 100% stability rate ;)
{
	static bool registered = false;
	if (!registered)
	{
		registered = true;
		std::uintptr_t rl = this->scheduler->get_global_luastate();

		rbx_pushcclosure(rl, custom_funcs::setreadonly);
		rbx_setglobal(rl, "setreadonly");

		rbx_pushcclosure(rl, custom_funcs::getrawmetatable);
		rbx_setglobal(rl, "getrawmetatable");

		rbx_pushcclosure(rl, custom_funcs::setfpscap);
		rbx_setglobal(rl, "setfpscap");

		rbx_pushcclosure(rl, custom_funcs::getfuncaddy);
		rbx_setglobal(rl, "getfuncaddy");

		rbx_pushcclosure(rl, custom_funcs::getnamecallmethod);
		rbx_setglobal(rl, "getnamecallmethod");

		rbx_pushcclosure(rl, custom_funcs::loadstring);
		rbx_setglobal(rl, "loadstring");

		rbx_pushcclosure(rl, custom_funcs::setidentity);
		rbx_setglobal(rl, "setidentity");

		rbx_pushcclosure(rl, custom_funcs::httpget);
		rbx_setglobal(rl, "HttpGet");

		rbx_pushcclosure(rl, custom_funcs::config_custom_rpc);
		rbx_setglobal(rl, "config_custom_rpc");

		rbx_pushcclosure(rl, custom_funcs::clear_custom_rpc);
		rbx_setglobal(rl, "clear_custom_rpc");

		output << console::color::pink << "Successfully registered custom funcs!\n";

		/*
			std::thread([]() -> void {
				MessageBoxA(NULL, "Custom functions will not be registered, cba to update.", "headhunter", NULL);
			}).detach();
		*/
	}
}

std::uintptr_t execution_t::get_global_state() const
{
	return this->scheduler->get_global_luastate();
}

void execution_t::set_fps(double fps) const
{
	this->scheduler->set_fps(fps);
}

execution_t::execution_t(const scheduler_t* scheduler)
	: scheduler(scheduler) {};