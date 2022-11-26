#ifndef COMMANDPARSER_H
#define COMMANDPARSER_H

#include<string>

class CommandParser
{
public:
	static void outCommandList();
	static void handleCommand(std::string cmdInput);
};

#endif // CommandParser.h