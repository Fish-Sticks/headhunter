#include "communication.h"


std::string communication_t::read_pipe() const
{
	std::string read;

	HANDLE pipe = CreateNamedPipeA("\\\\.\\pipe\\headhunter", PIPE_ACCESS_INBOUND | FILE_FLAG_FIRST_PIPE_INSTANCE, PIPE_TYPE_MESSAGE | PIPE_READMODE_MESSAGE | PIPE_WAIT, 1, 999999, 999999, NMPWAIT_USE_DEFAULT_WAIT, NULL);
	if (pipe == INVALID_HANDLE_VALUE) {
		return "";
	}

	if (!ConnectNamedPipe(pipe, NULL)) {
		CloseHandle(pipe);
		return "";
	}

	char buffer[999999]{};
	DWORD bytes_read = 0;

	while (ReadFile(pipe, buffer, 999999, &bytes_read, NULL)) {
		read += buffer;
		memset(buffer, NULL, 999999);
	}
	CloseHandle(pipe);

	return read;
}
