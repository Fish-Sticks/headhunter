#include "scheduler/scheduler.h"
#include "console/console.h"
#include "api/api.h"

scheduler_t::scheduler_t()
{
	this->taskscheduler = rbx_getscheduler();

	std::uintptr_t waiting_scripts_job = this->get_waiting_scripts_job();
	this->datamodel = *reinterpret_cast<std::uintptr_t*>(waiting_scripts_job + offsets::waiting_scripts_job::datamodel);
	this->script_context = *reinterpret_cast<std::uintptr_t*>(waiting_scripts_job + offsets::waiting_scripts_job::script_context);
}

std::uintptr_t scheduler_t::get() const
{
	return this->taskscheduler;
}

std::uintptr_t scheduler_t::get_datamodel() const
{
	return this->datamodel;
}

std::uintptr_t scheduler_t::get_script_context() const
{
	return this->script_context;
}

std::uintptr_t scheduler_t::get_global_luastate() const
{
	int state_type = 0;
	return rbx_getstate(this->get_script_context(), &state_type);
}

void scheduler_t::print_jobs() const
{
	for (std::uintptr_t& job : this->get_jobs())
	{
		std::string* job_name = reinterpret_cast<std::string*>(job + offsets::job::name);
		output << console::color::red << "Found job: " << job_name->c_str() << "\n";
	}

	MessageBoxA(NULL, "Thank you for using headhunter, created by fishy!", "Thanks!", NULL);
}

std::uintptr_t scheduler_t::get_waiting_scripts_job() const
{
	bool passed = false;
	for (std::uintptr_t& job : this->get_jobs())
	{
		if (std::string* job_name = reinterpret_cast<std::string*>(job + offsets::job::name); *job_name == "WaitingHybridScriptsJob")
		{
			std::printf("potential: 0x%08X\n", *reinterpret_cast<std::uintptr_t*>(job + offsets::waiting_scripts_job::datamodel));
			if (passed)
				return job;
			else
				passed = true;
		}
	}

	return 0;
}

std::vector<std::uintptr_t> scheduler_t::get_jobs() const
{
	std::vector<std::uintptr_t> jobs;
	std::uintptr_t* current_job = *reinterpret_cast<std::uintptr_t**>(this->taskscheduler + offsets::scheduler::jobs_start);
	do {
		jobs.push_back(*current_job);
		current_job += 2;
	} while (current_job != *reinterpret_cast<std::uintptr_t**>(this->taskscheduler + offsets::scheduler::jobs_end));

	return jobs;
}

void scheduler_t::hook_waiting_scripts_job(void* hook, std::uintptr_t& original_func) const
{
	output << console::color::green << "Hooking WaitingScriptsJob!\n";

	std::uintptr_t waiting_scripts_job = this->get_waiting_scripts_job();

	void** vtable = new void* [6]; // make new vtable
	memcpy(vtable, *reinterpret_cast<void**>(waiting_scripts_job), 0x18); // clone contents
	original_func = reinterpret_cast<std::uintptr_t>(vtable[2]); // grab func needed

	vtable[2] = hook; // override func
	*reinterpret_cast<void***>(waiting_scripts_job) = vtable; // replace with new vtable

	output << console::color::green << "Hooked!\n";
}

void scheduler_t::set_fps(double fps) const
{
	*reinterpret_cast<double*>(this->taskscheduler + offsets::scheduler::fps) = 1 / fps;
}