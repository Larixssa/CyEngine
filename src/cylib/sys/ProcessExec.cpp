#include "ProcessExec.h"
#include "PlatformVars.h"
#include "cylib/StringUtils.h"

#include<string>

void ProcessExec::processExit()
{
	exit(0);
}

void ProcessExec::processOpen(std::string command)
{
	if (PlatformVars::IS_WINDOWS) {
		std::string psString = "powershell ";
		psString = psString + " -command " + command;
		const char* commandPrefix = psString.c_str();
		system(commandPrefix);
	} else if (PlatformVars::IS_LINUX) {
		const char* uCommandPrefix = command.c_str(); system(uCommandPrefix);
	}
}

void ProcessExec::processClearScreen()
{
	if (PlatformVars::IS_WINDOWS) {
		system("cls");
	} else if (PlatformVars::IS_LINUX) {
		system("clear");
	}
}