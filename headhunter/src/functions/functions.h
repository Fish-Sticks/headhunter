#pragma once
#include <cstdint>

namespace custom_funcs
{
	extern int setreadonly(std::uintptr_t rl);
	extern int getrawmetatable(std::uintptr_t rl);
	extern int setfpscap(std::uintptr_t rl);
	extern int setidentity(std::uintptr_t rl);
	extern int loadstring(std::uintptr_t rl);
	extern int getfuncaddy(std::uintptr_t rl);
	extern int getnamecallmethod(std::uintptr_t rl);
	extern int httpget(std::uintptr_t rl);
}