#pragma once
#include <Windows.h>
#include <cstdint>

const std::uintptr_t current_module = reinterpret_cast<std::uintptr_t>(GetModuleHandle(NULL));

namespace func_defs
{
	using rbx_getscheduler_t = std::uintptr_t(__cdecl*)();
	using rbx_output_t = void(__fastcall*)(std::int16_t output_type, const char* str);
	using rbx_getstate_t = std::uintptr_t(__thiscall*)(std::uintptr_t SC, int* state_type);
	using rbx_pushvfstring_t = int(__cdecl*)(std::uintptr_t rl, const char* fmt, ...);
	using rbx_index2adr_t = std::uintptr_t*(__fastcall*)(std::uintptr_t rl, int idx);
}

namespace addresses
{
	const std::uintptr_t rbx_getscheduler_addy = current_module + 0xE130F0;
	const std::uintptr_t rbx_output_addy = current_module + 0x228740;
	const std::uintptr_t rbx_getstate_addy = current_module + 0x3C7270;
	const std::uintptr_t rbx_pushvfstring_addy = current_module + 0x131E380; // LIMITED TO 512 CHARACTERS

	const std::uintptr_t spawn_func_addy = current_module + 0x3E8CE0;
	const std::uintptr_t deserializer_func_addy = current_module + 0x13224A0;

	const std::uintptr_t pushcclosure_addy = current_module + 0x1346A60;
	const std::uintptr_t pushcclosure_exit_addy = current_module + 0x131E540;

	const std::uintptr_t setglobal_addy = current_module + 0;
	const std::uintptr_t setglobal_exit_addy = current_module + 0;
	const std::uintptr_t setglobal_patch_1_addy = current_module + 0;
	const std::uintptr_t setglobal_patch_2_addy = current_module + 0;

	const std::uintptr_t index2adr_addy = current_module + 0x1318BD0;

	const std::uintptr_t fake_ret_addy = current_module + 0x02CCE927; // reg jmp

	const std::uintptr_t callcheck_addy_1 = current_module + 0; // data ptr
	const std::uintptr_t callcheck_addy_2 = current_module + 0; // code ptr
	const std::uintptr_t callcheck_addy_3 = current_module + 0; // VM callcheck

	const std::uintptr_t xor_const = current_module + 0;
}

namespace offsets
{
	namespace scheduler
	{
		constexpr std::uintptr_t jobs_start = 0x134;
		constexpr std::uintptr_t jobs_end = 0x138;
		constexpr std::uintptr_t fps = 0x118;
	}

	namespace job
	{
		constexpr std::uintptr_t name = 0x10;
	}

	namespace waiting_scripts_job
	{
		constexpr std::uintptr_t datamodel = 0x28;
		constexpr std::uintptr_t script_context = 0x130;
	}

	namespace identity
	{
		constexpr std::uintptr_t extra_space = 0x48;
		constexpr std::uintptr_t identity = 0x18;
	}

	namespace luastate
	{
		constexpr std::uintptr_t top = 8;
		constexpr std::uintptr_t base = 16;
	}

	namespace luafunc
	{
		constexpr std::uintptr_t func = 16;
	}
}
