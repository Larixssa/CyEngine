#include "CommandParser.h"
#include "sources/CommandCalls.h"
#include "commandutils/CommandHandler.h"
#include "cylib/StringUtils.h"

#include<string>

void CommandParser::outCommandList()
{
	const int commandListSize = 5;

	std::string commandsList[commandListSize] = {
		"help",
		"version",
		"git",
		"clear",
		"exit"
	};

	std::string commandDescriptions[commandListSize] = {
		"Display information about commands.",
		"Get the version of the client.",
		"Get the project's repository info & link.",
		"Clear the screen.",
		"Exit out of the console."
	};

	CommandHandler::pushCommands(commandsList, commandDescriptions, commandListSize);
}

void CommandParser::handleCommand(std::string cmdInput)
{
	const int commandsListSize = 5;

	std::string commandTable[commandsListSize] = {
		"help", "version", "git", "clear", "exit"
	};

	CommandHandler::parseCommand(commandTable, cmdInput, commandsListSize);
}