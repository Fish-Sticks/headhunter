#include "functions/functions.h"
#include "addresses/addresses.hpp"
#include "console/console.h"
#include "api/api.h"
#include "execution/execution.h"
#include "discord/headhunter_impl.hpp"

#include <intrin.h>
#include <Wininet.h>

std::string Replace(std::string subject, const std::string& search,
	const std::string& replace) {
	size_t pos = 0;
	while ((pos = subject.find(search, pos)) != std::string::npos) {
		subject.replace(pos, search.length(), replace);
		pos += replace.length();
	}
	return subject;
}

std::string DownloadString(const std::string& URL) 
{
	std::string rtn{};
	char buffer[2000];

	HINTERNET interwebs = InternetOpen("Mozilla/5.0", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, NULL);
	if (!interwebs) return rtn;

	HINTERNET urlFile = InternetOpenUrl(interwebs, URL.c_str(), NULL, NULL, NULL, NULL);
	if (!urlFile) return rtn;

	DWORD bytesRead;
	do {
		InternetReadFile(urlFile, buffer, 2000, &bytesRead);
		rtn.append(buffer, bytesRead);
		memset(buffer, 0, 2000);
	} while (bytesRead);

	InternetCloseHandle(interwebs);
	InternetCloseHandle(urlFile);

	return Replace(rtn, "|n", "\r\n");
}

auto get_string = [](std::uintptr_t rl, std::uintptr_t idx) -> std::string
{
	std::int32_t tt = *reinterpret_cast<std::int32_t*>(reinterpret_cast<std::uintptr_t>(index2adr(rl, idx)) + 12);

	if (tt == 5)
	{
		std::uintptr_t tstring = *index2adr(rl, idx);
		return std::string(reinterpret_cast<const char*>(tstring + 0x14), *reinterpret_cast<std::size_t*>(tstring + 16) + (tstring + 16));
	}
	else
		return "";
};

auto get_number = [](std::uintptr_t rl, std::uintptr_t idx) -> double
{
	std::int32_t tt = *reinterpret_cast<std::int32_t*>(reinterpret_cast<std::uintptr_t>(index2adr(rl, idx)) + 12);

	if (tt == 2)
	{
		__m128d a = _mm_load_sd(reinterpret_cast<double*>(index2adr(rl, idx)));
		__m128d b = _mm_load_pd(reinterpret_cast<double*>(addresses::xor_const));
		__m128d res = _mm_xor_pd(a, b);
		double done = _mm_cvtsd_f64(res);

		return done;
	}
	else
		return 0;
};

auto get_boolean = [](std::uintptr_t rl, std::uintptr_t idx) -> bool
{
	std::int32_t tt = *reinterpret_cast<std::int32_t*>(reinterpret_cast<std::uintptr_t>(index2adr(rl, idx)) + 12);

	if (tt == 1)
	{
		return *reinterpret_cast<bool*>(index2adr(rl, idx));
	}
	else
		return 0;
};

namespace custom_funcs
{
	int setreadonly(std::uintptr_t rl)
	{
		std::uintptr_t table_val = *reinterpret_cast<std::uintptr_t*>(*reinterpret_cast<std::uintptr_t*>(rl + offsets::luastate::top) - 32);
		*reinterpret_cast<bool*>(table_val + 7) = *reinterpret_cast<bool*>(*reinterpret_cast<std::uintptr_t*>(rl + offsets::luastate::top) - 16);
		return 0;
	}

	int getrawmetatable(std::uintptr_t rl)
	{
		std::uintptr_t& base = *reinterpret_cast<std::uintptr_t*>(rl + offsets::luastate::base);
		std::uintptr_t& top = *reinterpret_cast<std::uintptr_t*>(rl + offsets::luastate::top);

		std::uintptr_t enc_mt = 0;

		enc_mt = *reinterpret_cast<std::uintptr_t*>(base) + (*reinterpret_cast<std::uint32_t*>(base + 12) == 6 ? 0x8 : 0x1C);

		if (std::uintptr_t mt = *reinterpret_cast<std::uintptr_t*>(enc_mt) + enc_mt)
		{
			*reinterpret_cast<std::uintptr_t*>(top) = mt;
			*reinterpret_cast<std::uintptr_t*>(top + 12) = 9;
			top += 16;
			return 1;
		}
		return 0;
	}

	int setfpscap(std::uintptr_t rl)
	{
		execution.set_fps(get_number(rl, 1));
		return 0;
	}

	int setidentity(std::uintptr_t rl) // DIY
	{
		output << console::color::red << "this ones for you to make!\n";
		return 0;
	}

	int loadstring(std::uintptr_t rl)
	{
		roblox_encoder_t roblox_encoder{};
		const std::string compiled = Luau::compile(get_string(rl, 1), {}, {}, &roblox_encoder);
		rbx_deserialize(rl, "headhunter.exe", compiled.c_str(), compiled.size());
		return 1;
	}

	int getfuncaddy(std::uintptr_t rl) // if you know how to use this, everything else in this exploit will be hella easy to make
	{
		std::uintptr_t func = rbx_decryptfunc(**reinterpret_cast<std::uintptr_t**>(rl + offsets::luastate::base));
		printf_s("0x%08X\n", func - reinterpret_cast<std::uintptr_t>(GetModuleHandle(NULL)));
		return 0;
	}

	int getnamecallmethod(std::uintptr_t rl)
	{
		if (std::uintptr_t method = *reinterpret_cast<std::uintptr_t*>(rl + 0x44))
		{
			rbx_pushvfstring(rl, "%s", reinterpret_cast<const char*>(method + 0x14));
			return 1;
		}
		return 0;
	}

	int httpget(std::uintptr_t rl)
	{
		rbx_pushstring(rl, DownloadString(get_string(rl, 1)));
		return 1;
	}

	int config_custom_rpc(std::uintptr_t rl)
	{
		if (*reinterpret_cast<std::uint32_t*>(*reinterpret_cast<std::uintptr_t*>(rl + offsets::luastate::base) + 12) != 9)
		{
			std::printf("table expected!\n");
			return 0;
		}
		
		rbx_rawgetfield(rl, 1, "name");
		std::string name = get_string(rl, -1);

		rbx_rawgetfield(rl, 1, "state");
		std::string state = get_string(rl, -1);

		rbx_rawgetfield(rl, 1, "details");
		std::string details = get_string(rl, -1);

		rbx_rawgetfield(rl, 1, "activity_type");
		std::string activity_type = get_string(rl, -1);

		rbx_rawgetfield(rl, 1, "large_image_key");
		std::string large_image_key = get_string(rl, -1);

		rbx_rawgetfield(rl, 1, "small_image_key");
		std::string small_image_key = get_string(rl, -1);

		rbx_rawgetfield(rl, 1, "large_image_text");
		std::string large_image_text = get_string(rl, -1);

		rbx_rawgetfield(rl, 1, "small_image_text");
		std::string small_image_text = get_string(rl, -1);

		std::uint64_t id = 0;
		try { // "bandaid code" - iivillian
			rbx_rawgetfield(rl, 1, "client_id");
			id = std::stoull(get_string(rl, -1));
		}
		catch (...) {};

		rbx_rawgetfield(rl, 1, "enable_time_elapsed");
		bool result = get_boolean(rl, -1);

		headhunter_rpc_t& hh_rpc = headhunter_rpc_t::get();
		hh_rpc.set_name(name);
		hh_rpc.set_state(state);
		hh_rpc.set_details(details);
		hh_rpc.set_activity_type(activity_type);
		hh_rpc.set_large_image_key(large_image_key);
		hh_rpc.set_small_image_key(small_image_key);
		hh_rpc.set_large_image_text(large_image_text);
		hh_rpc.set_small_image_text(small_image_text);

		if (result)
			hh_rpc.set_date_start(std::time(0));
		else
			hh_rpc.set_date_start(0);
		
		if (id != hh_rpc.get_application_id() && id != 0)
		{
			hh_rpc.get_core()->~Core();
			discord::Core* new_core;
			discord::Core::Create(id, DiscordCreateFlags_Default, &new_core);
			hh_rpc.set_core(new_core);
		}

		hh_rpc.set_application_id(id);
		hh_rpc.update_activity();
		return 1;
	}

	int clear_custom_rpc(std::uintptr_t rl)
	{
		headhunter_rpc_t::get().set_application_id(0);
		headhunter_rpc_t::get().clear_activity();
		return 0;
	}
}