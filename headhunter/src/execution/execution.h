#pragma once
#include <Windows.h>
#include <string>
#include <stack>

#include <Luau/Compiler.h>
#include <Luau/BytecodeBuilder.h>


#include "scheduler/scheduler.h"
#include "console/console.h"

class execution_t
{
private:
	const scheduler_t* scheduler;
public:
	execution_t(const scheduler_t* scheduler);

	void hook_waiting_scripts_job() const;
	void run_script(const std::string& script) const;
	void set_identity(std::int8_t identity) const;
	void register_globals() const;
	std::uintptr_t get_global_state() const;
	void set_fps(double fps) const;


	friend int __fastcall scheduler_cycle(std::uintptr_t waiting_scripts_job, int fakearg, int a2);
};

class roblox_encoder_t : public Luau::BytecodeEncoder
{
	std::uint8_t encodeOp(const std::uint8_t opcode) override;
};

extern const execution_t execution;