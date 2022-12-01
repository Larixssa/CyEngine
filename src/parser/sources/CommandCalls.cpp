#include "CommandCalls.h"
#include "CommandsSource.h"
#include "cylib/StringUtils.h"
#include "init/Init.h"

void CommandCalls::callCommandParser(std::string cmdToParse)
{
	if (!cmdToParse.empty())
	{
		if (StringUtils::strCompare(cmdToParse, "help")) {
			CommandsSource::helpCommand();
		}

		if (StringUtils::startsWith(cmdToParse, "version")) {
			CommandsSource::versionCommand(cmdToParse);
		}

		if (StringUtils::startsWith(cmdToParse, "git")) {
			CommandsSource::getGitCommand(cmdToParse);
		}

		if (StringUtils::strCompare(cmdToParse, "clear")) {
			CommandsSource::clearCommand();
		}

		if (StringUtils::strCompare(cmdToParse, "reinit")) {
			CommandsSource::reinitCommand();
		}

		if (StringUtils::strCompare(cmdToParse, "exit")) {
			CommandsSource::exitCommand();
		} else {
			Init::initClient(false, false, false);
		}
	}
}