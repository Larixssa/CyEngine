#include "CommandCalls.h"
#include "CommandsSource.h"
#include "cylib/StringUtils.h"

void CommandCalls::callCommandParser(std::string cmdToParse)
{
	if (!cmdToParse.empty())
	{
		if (StringUtils::strCompare(cmdToParse, "help")) {
			CommandsSource::helpCommand(cmdToParse);
		}

		if (StringUtils::strCompare(cmdToParse, "exit")) {
			CommandsSource::exitCommand(cmdToParse);
		}
	}
}