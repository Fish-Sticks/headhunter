#include <Windows.h>
#include <thread>

#include "console/console.h"
#include "scheduler/scheduler.h"
#include "execution/execution.h"
#include "communication/communication.h"
#include "api/api.h"
#include "functions/functions.h"

const console output{ "headhunter - fishy" };
const scheduler_t scheduler{};
const execution_t execution{ &scheduler };
const communication_t communication{};

void mainfunc()
{
    output << console::color::cyan << "Welcome to headhunter! A simple exploit made by fishy.\n";
    output << console::color::white << "Current scheduler: 0x" << scheduler.get() << "\n";

    scheduler.print_jobs();
        
    output << console::color::pink << "Got Datamodel: 0x" << scheduler.get_datamodel() << "\n";
    output << console::color::pink << "Got ScriptContext: 0x" << scheduler.get_script_context() << "\n";
    output << console::color::pink << "Got luastate: 0x" << scheduler.get_global_luastate() << "\n";

    execution.hook_waiting_scripts_job();
    execution.set_identity(7);

    output << console::color::pink << "Successfully set identity to 7!\n";

/*
    std::string input;
    while (std::getline(std::cin, input))
    {
        execution.run_script(input);
    }
*/

    // makes the metatable hook
    std::string init_script = R"--(
        local mt = getrawmetatable(game)
        local orig = mt.__namecall

        setreadonly(mt, false)

        mt.__namecall = function(self, ...)
            if getnamecallmethod() == "HttpGet" then
                return HttpGet(...)
            end

            return orig(self, ...)
        end

        setreadonly(mt, true)
        warn("Headhunter initialization script finished!")
    )--";

    execution.run_script(init_script);

    while (true)
    {
        execution.run_script(communication.read_pipe());
    }
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        std::thread(mainfunc).detach();
        break;
    }
    return TRUE;
}