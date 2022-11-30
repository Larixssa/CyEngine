#include "CommandHandler.h"
#include "Command.h"
#include "cystdio/CyStdio.h"
#include "cylib/StringUtils.h"
#include "parser/sources/CommandCalls.h"
#include "proclib/Error.h"
#include "init/Init.h"

#include<string>

void CommandHandler::pushCommands(std::string* commandsList, std::string* commandsDesc, int commandListsSize)
{
	for (int i = 0; i < commandListsSize; i++) {
		CyStdio::cPut(Command::createCommand(commandsList[i], commandsDesc[i]) + "\n");
	}
}

void CommandHandler::parseCommand(std::string* commandsList, std::string cmdIO, int cmdcSize)
{
	Error::DEFAULT_ERROR_VALUE = "Command";
	Error::DEFAULT_ERROR_SPEC = cmdIO;

	bool doParse = false;

	for (int i = 0; i < cmdcSize; ++i)
	{
		if (StringUtils::strCompare(cmdIO, commandsList[i]))
		{
			doParse = true;
		}
	}

	if (doParse) {
		CommandCalls::callCommandParser(cmdIO);
	} else {
		Error::displayErrorMessage(); Init::initClient(false, false, false);
	}
}