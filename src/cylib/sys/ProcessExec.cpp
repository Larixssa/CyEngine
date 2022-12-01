#include "ProcessExec.h"
#include "Platform.h"
#include "cylib/StringUtils.h"

#include<string>

void ProcessExec::processExit()
{
	exit(0);
}

void ProcessExec::processOpen(std::string command)
{
	if (Platform::checkPlatform("Windows")) {
		std::string psString = "powershell ";
		psString = psString + " -command " + command;
		const char* commandPrefix = psString.c_str();
		system(commandPrefix);
	} else if (Platform::checkPlatform("Linux")) {
		const char* uCommandPrefix = command.c_str(); system(uCommandPrefix);
	}
}

void ProcessExec::processClearScreen()
{
	if (Platform::checkPlatform("Windows")) {
		system("cls");
	} else if (Platform::checkPlatform("Linux")) {
		system("clear");
	}
}
