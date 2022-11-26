#ifndef COMMANDSSOURCE_H
#define COMMANDSSOURCE_H

#include<string>

class CommandsSource
{
public:
	static void helpCommand();
	static void versionCommand(std::string tParse);
	static void getGitCommand(std::string tParse);
	static void clearCommand();
	static void exitCommand();
};

#endif // CommandsSource.h