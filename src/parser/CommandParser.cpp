#include "CommandParser.h"
#include "sources/CommandCalls.h"
#include "commandutils/CommandHandler.h"
#include "cylib/StringUtils.h"

#include<string>

const int CommandParser::COMMAND_LIST_SIZE = 7;

void CommandParser::outCommandList()
{
	const int commandListSize = CommandParser::COMMAND_LIST_SIZE;

	std::string commandsList[commandListSize] = {
		"help",
		"version",
		"git",
		"iurl",
		"clear",
		"reinit",
		"exit"
	};

	std::string commandDescriptions[commandListSize] = {
		"Display information about commands.",
		"Get the version of the client.",
		"Get the project's repository info & link.",
		"Similar to Linux's " + StringUtils::quoteString("curl") + " command.",
		"Clear the screen.",
		"Re-Initialize the console.",
		"Exit out of the console."
	};

	CommandHandler::pushCommands(commandsList, commandDescriptions, commandListSize);
}

void CommandParser::handleCommand(std::string cmdInput)
{
	const int commandsListSize = CommandParser::COMMAND_LIST_SIZE;

	std::string commandTable[commandsListSize] = {
		"help", "version", "git", "iurl", "clear", 
		"reinit", "exit"
	};

	CommandHandler::parseCommand(commandTable, cmdInput, commandsListSize);
}