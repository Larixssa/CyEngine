#ifndef COMMANDPARSER_H
#define COMMANDPARSER_H

#include<string>

class CommandParser
{
public:
	static const int COMMAND_LIST_SIZE;
	static void outCommandList();
	static void handleCommand(std::string cmdInput);
};

#endif // CommandParser.h