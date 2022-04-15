#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>

#include "addresses/addresses.hpp"


extern void rbx_spawn(std::uintptr_t rl);
extern void rbx_deserialize(std::uintptr_t rl, const char* chunk_name, const char* bytecode, int byte_len);
extern void rbx_decrement_top(std::uintptr_t rl, std::int32_t amount);
extern void rbx_setidentity(std::uintptr_t rl, std::int8_t identity);
extern void rbx_pushcclosure(std::uintptr_t rl, void* closure);
extern void rbx_setglobal(std::uintptr_t rl, const char* globalname);
extern std::uintptr_t rbx_decryptfunc(std::uintptr_t func);
extern void rbx_pushnumber(std::uintptr_t rl, double num);
extern std::uint32_t rbx_gettop(std::uintptr_t rl);
extern void rbx_pushstring(std::uintptr_t rl, const std::string& str);


extern func_defs::rbx_getscheduler_t rbx_getscheduler;
extern func_defs::rbx_getstate_t rbx_getstate;
extern func_defs::rbx_output_t rbx_output;
extern func_defs::rbx_pushvfstring_t rbx_pushvfstring;
extern func_defs::rbx_psuedo2adr_t rbx_psuedo2adr;