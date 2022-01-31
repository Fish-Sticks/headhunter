#include "api/api.h"
#include "console/console.h"

#include <intrin.h>

func_defs::rbx_getscheduler_t rbx_getscheduler = reinterpret_cast<func_defs::rbx_getscheduler_t>(addresses::rbx_getscheduler_addy);
func_defs::rbx_getstate_t rbx_getstate = reinterpret_cast<func_defs::rbx_getstate_t>(addresses::rbx_getstate_addy);
func_defs::rbx_output_t rbx_output = reinterpret_cast<func_defs::rbx_output_t>(addresses::rbx_output_addy);
func_defs::rbx_pushvfstring_t rbx_pushvfstring = reinterpret_cast<func_defs::rbx_pushvfstring_t>(addresses::rbx_pushvfstring_addy);
func_defs::rbx_index2adr_t rbx_index2adr = reinterpret_cast<func_defs::rbx_index2adr_t>(addresses::index2adr_addy);


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

std::uintptr_t rbx_decryptfunc(std::uintptr_t func)
{
	return *reinterpret_cast<std::uintptr_t*>(func + offsets::luafunc::func) - (func + offsets::luafunc::func);
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
	std::uintptr_t func = *rbx_index2adr(rl, -10003); // get upval
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


bool init = false;
// fishy's take on pushcclosure
void rbx_pushcclosure(std::uintptr_t rl, void* closure)
{
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

	const char* dummystring = ""; // dont want this to be nullptr, i think it gets read from idk, just keep it initialized

	__asm {
		pusha // push all general registers (to preserve them)
		push after // push memory address of after, this will be used later for cleanup, for now just remember right under old esp is after
		mov old_esp, esp // save a clone of esp, we're exiting mid function so it's gonna be in some random position, we need to preserve old pos

		mov edi, after
		mov ecx, rl // this is a normal __fastcall standard, first arg in ecx, second arg in edx, rest are on stack pushed right to left
		mov edx, dummystring
		push closure
		push addresses::callcheck_addy_2
		push addresses::fake_ret_addy
		jmp addresses::pushcclosure_addy // preform a normal call, it'll run through the func and jump to cleanup
	after: // we jump back here
		popa // restore all the preserved register values
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

	replace_func.write(&a, 4);
	replace_string.write(func_name, 7);
	strip_callcheck.write(&callcheck_replace, 2);

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
		mov[esp + 0x14], edx
		mov[esp + 0xa0], edx
		pusha
		push ecx
		push edx
	}

	patch_2.revert(); // this func peepoo breaks all my registers, thats why so many push lmao

	__asm
	{
		pop edx
		pop ecx
		popa
		push addresses::setglobal_patch_2_addy
		ret
	}
}

	replace_func.revert();
	replace_string.revert();
	rbx_decrement_top(rl, 1);
}