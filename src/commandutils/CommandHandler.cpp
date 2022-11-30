#include "CommandHandler.h"
#include "Command.h"
#include "cystdio/CyStdio.h"
#include "cylib/StringUtils.h"
#include "parser/sources/CommandCalls.h"
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
		Init::initClient(false, false, false);
	}
}