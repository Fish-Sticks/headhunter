#include "api/api.h"
#include "console/console.h"

#include <intrin.h>

func_defs::rbx_getscheduler_t rbx_getscheduler = reinterpret_cast<func_defs::rbx_getscheduler_t>(addresses::rbx_getscheduler_addy);
func_defs::rbx_getstate_t rbx_getstate = reinterpret_cast<func_defs::rbx_getstate_t>(addresses::rbx_getstate_addy);
func_defs::rbx_output_t rbx_output = reinterpret_cast<func_defs::rbx_output_t>(addresses::rbx_output_addy);
func_defs::rbx_pushvfstring_t rbx_pushvfstring = reinterpret_cast<func_defs::rbx_pushvfstring_t>(addresses::rbx_pushvfstring_addy);
func_defs::rbx_psuedo2adr_t rbx_psuedo2adr = reinterpret_cast<func_defs::rbx_psuedo2adr_t>(addresses::psuedo2adr_addy);


// NOTE: THIS FILE IS PURPOSELY MESSY, I DID THIS BECAUSE GIVING OUT A NEAT API WOULDNT BE VERY GOOD FOR PEOPLE WHO CANT EVEN UPDATE AN EXPLOIT


class replacer_t // simple patching class I made to make patching easy
{
private:
	std::uintptr_t addy = NULL;
	std::size_t stolen_len = NULL;
	byte* stolen = nullptr;
public:
	replacer_t(std::uintptr_t addy)
		: addy{ addy } {}

	~replacer_t()
	{
		if (stolen != nullptr)
		{
			delete[] this->stolen;
		}
	}

	void write(const void* mem, std::size_t size)
	{
		this->stolen_len = size;
		this->stolen = new byte[size];

		DWORD old;
		VirtualProtect(reinterpret_cast<void*>(addy), size, PAGE_EXECUTE_READWRITE, &old);
		memcpy(this->stolen, reinterpret_cast<void*>(addy), size);
		memcpy(reinterpret_cast<void*>(addy), mem, size);
		VirtualProtect(reinterpret_cast<void*>(addy), size, old, &old);
	}

	void revert()
	{
		DWORD old;
		VirtualProtect(reinterpret_cast<void*>(addy), this->stolen_len, PAGE_EXECUTE_READWRITE, &old);
		memcpy(reinterpret_cast<void*>(addy), this->stolen, this->stolen_len);
		VirtualProtect(reinterpret_cast<void*>(addy), this->stolen_len, old, &old);
	}
};

void rbx_spawn(std::uintptr_t rl)
{
	__asm {
		mov edi, finished
		push rl
		push addresses::fake_ret_addy
		jmp addresses::spawn_func_addy
	finished:
		add esp, 4
	}
}

void rbx_deserialize(std::uintptr_t rl, const char* chunk_name, const char* bytecode, int byte_len)
{
	__asm {
		mov edi, finished
		mov ecx, rl
		mov edx, chunk_name
		push 0
		push byte_len
		push bytecode
		push addresses::fake_ret_addy
		jmp addresses::deserializer_func_addy
	finished:
		add esp, 0xC
	}
}

void rbx_decrement_top(std::uintptr_t rl, std::int32_t amount)
{
	*reinterpret_cast<std::uintptr_t*>(rl + offsets::luastate::top) -= (16 * amount);
}

void rbx_setidentity(std::uintptr_t rl, std::int8_t identity)
{
	*reinterpret_cast<std::int8_t*>(*reinterpret_cast<std::uintptr_t*>(rl + offsets::identity::extra_space) + offsets::identity::identity) = identity;
}

std::uint32_t rbx_gettop(std::uintptr_t rl)
{
	return *reinterpret_cast<std::uint32_t*>(rl + offsets::luastate::top) - *reinterpret_cast<std::uint32_t*>(rl + offsets::luastate::base) >> 4;
}

std::uintptr_t rbx_decryptfunc(std::uintptr_t func)
{
	return *reinterpret_cast<std::uintptr_t*>(func + offsets::luafunc::func) + (func + offsets::luafunc::func);
}

void rbx_pushnumber(std::uintptr_t rl, double num)
{
	__m128d a = _mm_load_sd(&num);
	__m128d b = _mm_load_pd(reinterpret_cast<double*>(addresses::xor_const));
	__m128d res = _mm_xor_pd(a, b);
	double done = _mm_cvtsd_f64(res);

	*reinterpret_cast<double*>(*reinterpret_cast<std::uintptr_t*>(rl + offsets::luastate::top)) = done;
	*reinterpret_cast<int*>(*reinterpret_cast<std::uintptr_t*>(rl + offsets::luastate::top) + 12) = 2; // *cough* hardcoded
	*reinterpret_cast<std::uintptr_t*>(rl + offsets::luastate::top) += 16;
}

int custom_func_handler(std::uintptr_t rl) // acts as a proxy
{
	std::uintptr_t func = *rbx_psuedo2adr(rl, -10003); // get upval
	return reinterpret_cast<int(__cdecl*)(std::uintptr_t)>(rbx_decryptfunc(func))(rl);
}

std::uintptr_t old_val = 0;
std::uintptr_t backup = 0;
void __declspec(naked) custom_func_proxy() // decides if the call is actually from lua, or just bc we overwrote some random fucking addy in oblivion
{
	__asm
	{
		mov backup, eax
		pop eax

		cmp eax, addresses::callcheck_addy_3

		push eax
		mov eax, backup

		je call_handler

		push old_val
		ret
	call_handler:
		push custom_func_handler
		ret
	}
}

std::uintptr_t old_esp = 0; // must be global, it's storing stack backup
void patching_cleanup();


// fishy's take on pushcclosure
void rbx_pushcclosure(std::uintptr_t rl, void* closure)
{
	static bool init = false;
	if (!init)
	{
		init = true;
		old_val = *reinterpret_cast<std::uintptr_t*>(addresses::callcheck_addy_1);
		*reinterpret_cast<std::uintptr_t*>(addresses::callcheck_addy_1) = reinterpret_cast<std::uintptr_t>(custom_func_proxy);
	}

	byte patch[5]{ 0xE9 };
	*reinterpret_cast<std::uintptr_t*>(patch + 1) = reinterpret_cast<std::uintptr_t>(patching_cleanup) - addresses::pushcclosure_exit_addy - 5; // create jump which will run the func through to the point and then jump to my func after pushing closure
	replacer_t func{ addresses::pushcclosure_exit_addy }; // prepare the replacer

	func.write(patch, 5); // patch code

	const char* debug_name = ""; // debug name for cclosure, put one if u want

	__asm {
		pushad // push all general registers (to preserve them)
		push after // push memory address of after, this will be used later for cleanup, for now just remember right under old esp is after
		mov old_esp, esp // save a clone of esp, we're exiting mid function so it's gonna be in some random position, we need to preserve old pos

		mov edi, after
		mov ecx, rl // this is a normal __fastcall standard, first arg in ecx, second arg in edx, rest are on stack pushed right to left
		mov edx, debug_name
		push closure
		push addresses::callcheck_addy_2
		push addresses::fake_ret_addy
		jmp addresses::pushcclosure_addy // preform a normal call, it'll run through the func and jump to cleanup
	after: // we jump back here
		popad // restore all the preserved register values
	}

	func.revert(); // remove patch on function, no longer needed so lets not get hit by memcheck
} // and that's how she works


void rbx_setglobal_jump();
replacer_t patch_2{ addresses::setglobal_patch_2_addy };
std::uintptr_t* key = nullptr;

void rbx_setglobal(std::uintptr_t rl, const char* globalname) // todo: checkout setglobal vuln I just found in ida
{
	byte overwrite_1[7]{};
	byte jmp_patch[5]{ 0xE9 };

	memset(overwrite_1, 0x90, 7);

	replacer_t patch_1{ addresses::setglobal_patch_1_addy };
	patch_1.write(overwrite_1, 7);

	*reinterpret_cast<std::uintptr_t*>(jmp_patch + 1) = (reinterpret_cast<std::uintptr_t>(rbx_setglobal_jump) - addresses::setglobal_patch_2_addy - 5);
	patch_2.write(jmp_patch, 5);

	replacer_t patch_3{ addresses::setglobal_exit_addy };
	*reinterpret_cast<std::uintptr_t*>(jmp_patch + 1) = reinterpret_cast<std::uintptr_t>(patching_cleanup) - addresses::setglobal_exit_addy - 5;
	patch_3.write(jmp_patch, 5);

	rbx_pushvfstring(rl, "%s", globalname); // generate key
	key = *reinterpret_cast<std::uintptr_t**>(*reinterpret_cast<std::uintptr_t*>(rl + offsets::luastate::top) - 16);
	rbx_decrement_top(rl, 1);

	__asm {
		pusha
		push finished
		mov old_esp, esp
		mov edi, finished

		mov ecx, rl
		push addresses::fake_ret_addy
		jmp addresses::setglobal_addy
	finished:
		popa
	}

	patch_1.revert();
	patch_3.revert();
}

void __declspec(naked) rbx_setglobal_jump()
{
	__asm
	{
		mov edx, key
		mov[esp + 0x20], edx
		mov[esp + 0xB0], edx
		pushad
	}

	patch_2.revert(); // this func peepoo breaks all my registers, thats why so many push lmao

	__asm
	{
		popad
		push addresses::setglobal_patch_2_addy
		ret
	}
}

void __declspec(naked) patching_cleanup() // callback for hooked shit
{
	__asm {
		mov esp, old_esp // this will restore stack, remember how i said up there remember memory address of after is right under esp, well that's what this does is sets up the return and removes all the old values that func we called polluted stack with
		ret // return in asm just means jump to the address thats on the top of the stack, that being the one we pushed (push after)
	} // this will go to the after label
}

unsigned int luaS_hash(const char* str, size_t len)
{
	unsigned int a = 0, b = 0;
	unsigned int h = unsigned(len);
	while (len >= 32)
	{
#define rol(x, s) ((x >> s) | (x << (32 - s)))
#define mix(u, v, w) a ^= h, a -= rol(h, u), b ^= a, b -= rol(a, v), h ^= b, h -= rol(b, w)
		uint32_t block[3];
		memcpy(block, str, 12);
		a += block[0];
		b += block[1];
		h += block[2];
		mix(14, 11, 25);
		str += 12;
		len -= 12;
#undef mix
#undef rol
	}
	for (size_t i = len; i > 0; --i)
		h ^= (h << 5) + (h >> 2) + (uint8_t)str[i - 1];
	return h;
}

std::uintptr_t rbx_newstr(std::uintptr_t rl, const std::string& str)
{
	size_t length = str.size() + 21;
	std::uintptr_t global = (rl + 0x18) - *reinterpret_cast<std::uintptr_t*>(rl + 0x18);
	const auto frealloc = *reinterpret_cast<std::uintptr_t(__cdecl**)(std::uintptr_t, std::uintptr_t, std::uintptr_t, size_t)>(global + 12);

	std::uintptr_t tstring = frealloc(*reinterpret_cast<std::uintptr_t*>(global + 16), 0, 0, length);

	unsigned int hash = luaS_hash(str.c_str(), str.size());

	*reinterpret_cast<size_t*>(global + 0x38) += length;
	*reinterpret_cast<size_t*>(global + 0x144 + 4 * *reinterpret_cast<byte*>(rl + 4)) += length;

	*reinterpret_cast<byte*>(tstring) = *reinterpret_cast<byte*>(global + 20) & 3;
	*reinterpret_cast<byte*>(tstring + 1) = 5;
	*reinterpret_cast<byte*>(tstring + 2) = *reinterpret_cast<byte*>(rl + 4);

	*reinterpret_cast<std::uint32_t*>(tstring + 12) = (tstring + 12) ^ hash; // hash
	*reinterpret_cast<std::size_t*>(tstring + 16) = str.size() - (tstring + 16); // strlen

	memcpy(reinterpret_cast<void*>(tstring + 20), str.c_str(), str.size()); // string itself
	*reinterpret_cast<char*>(tstring + str.size() + 20) = '/0'; // null terminate string

	const auto meme = *reinterpret_cast<std::uint16_t(__cdecl**)(std::uintptr_t, std::uintptr_t)>(global + 0x858);
	std::uint16_t res = -1;
	if (meme)
		res = meme(tstring + 20, str.size()); // atom

	*reinterpret_cast<std::uint16_t*>(tstring + 4) = res;

	std::uint32_t speedrun = 4 * (hash & (*reinterpret_cast<std::uint32_t*>(global + 8) - 1)); // put shit together like legos, cba to read lua docs so just this is made from memory lol
	*reinterpret_cast<std::uint32_t*>(tstring + 8) = *reinterpret_cast<std::uint32_t*>(speedrun + *reinterpret_cast<std::uint32_t*>(global + 4));
	*reinterpret_cast<std::uint32_t*>(speedrun + *reinterpret_cast<std::uint32_t*>(global + 4)) = tstring;
	++*reinterpret_cast<std::uint32_t*>(global);

	return tstring;
}

void rbx_pushstring(std::uintptr_t rl, const std::string& str)
{
	std::uintptr_t tstring = rbx_newstr(rl, str);

	std::uintptr_t* top = reinterpret_cast<std::uintptr_t*>(rl + offsets::luastate::top); // push
	*reinterpret_cast<std::uint32_t*>(*top) = tstring;
	*reinterpret_cast<std::uint32_t*>(*top + 12) = 5;
	*top += 16;
}

std::uintptr_t* index2adr(std::uintptr_t rl, int idx)
{
	if (idx > 0)
	{
		return reinterpret_cast<std::uintptr_t*>(*reinterpret_cast<std::uintptr_t*>(rl + offsets::luastate::base) + (idx * 16) - 16);
	}
	else if (idx > -10000)
	{
		return reinterpret_cast<std::uintptr_t*>(*reinterpret_cast<std::uintptr_t*>(rl + offsets::luastate::top) + (idx * 16));
	}
	else
	{
		return rbx_psuedo2adr(rl, idx);
	}
}

std::uintptr_t* rbx_luah_getstr(std::uintptr_t table, unsigned int hash) // im gonna be using hash directly, my strings don't get re-used like they're supposed to in newlstr cuz that's extra code LOL
{
	std::uintptr_t start_node = (table + 16) + *reinterpret_cast<std::uintptr_t*>(table + 16);
	std::uintptr_t current_node = start_node + 32 * (hash & ((1 << *reinterpret_cast<byte*>(table + 4)) - 1));

	for (;;)
	{
		std::uintptr_t key = (current_node + 16);
		std::uintptr_t enc_hash = (*reinterpret_cast<std::uintptr_t*>(key) + 0xC);

		if ((*reinterpret_cast<byte*>(key + 12) & 0xF) == 5 && (enc_hash ^ *reinterpret_cast<std::uintptr_t*>(enc_hash)) == hash)
			return reinterpret_cast<std::uintptr_t*>(current_node);

		std::uintptr_t next = *reinterpret_cast<std::uint32_t*>(key + 12) >> 4;
		if (!next)
			break;

		current_node += (32 * next);
	}

	return const_cast<std::uintptr_t*>(addresses::nilobject);
}

int rbx_rawgetfield(std::uintptr_t rl, int idx, const std::string& k) // don't be a moron and feed this func (( not )) tables, I cba to check if it is :kekw: it's a meme anyways isn't it?
{ // for the stupids out there, this is just like getfield except it doesn't invoke a metatable so it won't work on userdatas and only tables
	std::uintptr_t table = *index2adr(rl, idx);
	std::uintptr_t hash = luaS_hash(k.c_str(), k.length());

	std::uintptr_t* value = rbx_luah_getstr(table, hash);

	memcpy(*reinterpret_cast<std::uintptr_t**>(rl + offsets::luastate::top), value, 16);
	*reinterpret_cast<std::uintptr_t*>(rl + offsets::luastate::top) += 16;

	return *reinterpret_cast<int*>(*reinterpret_cast<std::uintptr_t*>(rl + offsets::luastate::top) - 20);
}