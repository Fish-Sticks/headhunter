#include "api/api.h"
#include "console/console.h"

func_defs::rbx_getscheduler_t rbx_getscheduler = reinterpret_cast<func_defs::rbx_getscheduler_t>(addresses::rbx_getscheduler_addy);
func_defs::rbx_getstate_t rbx_getstate = reinterpret_cast<func_defs::rbx_getstate_t>(addresses::rbx_getstate_addy);
func_defs::rbx_output_t rbx_output = reinterpret_cast<func_defs::rbx_output_t>(addresses::rbx_output_addy);
func_defs::rbx_pushvfstring_t rbx_pushvfstring = reinterpret_cast<func_defs::rbx_pushvfstring_t>(addresses::rbx_pushvfstring_addy);

class replacer_t // simple patching class I made to make patching easy and not messy
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

std::uintptr_t old_esp = 0; // must be global, it's storing stack backup
void cleanup();

// fishy's take on pushcclosure
void rbx_pushcclosure(std::uintptr_t rl, void* closure) // comes with no upvalues, oh well lmao u can add that yourself
{
	byte patch[5]{ 0xE9 };
	*reinterpret_cast<std::uintptr_t*>(patch + 1) = reinterpret_cast<std::uintptr_t>(cleanup) - addresses::pushcclosure_exit_addy - 5; // create jump which will run the func through to the point and then jump to my func after pushing closure
	replacer_t func{ addresses::pushcclosure_exit_addy }; // prepare the replacer

	func.write(patch, 5); // patch code

	const char* dummystring = ""; // dont want this to be nullptr, i think it gets read from idk, just keep it initialized

	__asm {
		pusha // push all registers (to preserve them)
		push after // push memory address of after, this will be used later for cleanup, for now just remember right under old esp is after
		mov old_esp, esp // save a clone of esp, we're exiting mid function so it's gonna be in some random position, we need to preserve old pos

		mov ecx, rl // this is a normal __fastcall standard, first arg in ecx, second arg in edx, rest are on stack pushed right to left
		mov edx, dummystring
		push closure
		push 0
		call addresses::pushcclosure_addy // preform a normal call, it'll run through the func and jump to cleanup
	after: // we jump back here
		popa // restore all the preserved register values
	}

	func.revert(); // remove patch on function, no longer needed so lets not get hit by memcheck
} // and that's how she works

void __declspec(naked) cleanup() // callback for pushcclosure since it's not actually pushcclosure, i just morphed the func to be it lmao
{
	__asm {
		mov esp, old_esp // this will restore stack, remember how i said up there remember memory address of after is right under esp, well that's what this does is sets up the return and removes all the old values that func we called polluted stack with
		ret // return in asm just means jump to the address thats on the top of the stack, that being the one we pushed (push after)
	} // this will go to the after label
}

replacer_t strip_callcheck{ addresses::callcheck_addy };

int cool2(std::uintptr_t rl)
{
	//strip_callcheck.revert();
	rbx_pushvfstring(rl, "%s", "you somehow successfully made this work!");
	return 1;
}

int cool(std::uintptr_t rl)
{
	output << console::color::pink << "CUSTOM FUNC CALLED!\n";
	rbx_pushcclosure(rl, cool2);
	return 1;
}

void rbx_testfunc(std::uintptr_t rl)
{
	int* a = reinterpret_cast<int*>(cool);
	int callcheck_replace = 0x9090; // nop nop

	const char* func_name = "hacker";

	replacer_t replace_func{ addresses::xpcall_func_closure_addy };
	replacer_t replace_string{ addresses::xpcall_string_spot_addy };


	replace_func.write(&a, 4);
	replace_string.write(func_name, 7);
	//strip_callcheck.write(&callcheck_replace, 2);

	__asm {
		mov edi, finished
		mov ecx, rl
		push addresses::fake_ret_addy
		jmp addresses::test_func_addy
	finished:
	}

	replace_func.revert();
	replace_string.revert();
	rbx_decrement_top(rl, 1);
}
