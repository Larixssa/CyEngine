#ifndef COMMANDHANDLER_H
#define COMMANDHANDLER_H

#include<string>

class CommandHandler
{
public:
	static void pushCommands(std::string* commandsList, std::string* commandsDesc, int commandListSize);
	static void parseCommand(std::string* commandsList, std::string commandInput, int commandListSize);
};

#endif // CommandHandler.h