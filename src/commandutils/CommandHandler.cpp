#include "CommandHandler.h"
#include "Command.h"
#include "cystdio/CyStdio.h"

#include<string>

void CommandHandler::pushCommands(std::string* commandsList, std::string* commandsDesc, int commandListsSize)
{
	for (int i = 0; i < commandListsSize; i++) {
		CyStdio::cPut(Command::createCommand(commandsList[i], commandsDesc[i]) + "\n");
	}
}