#ifndef COMMANDSSOURCE_H
#define COMMANDSSOURCE_H

#include<string>

class CommandsSource
{
public:
	static void helpCommand(std::string tParse);
	static void versionCommand(std::string tParse);
	static void getGitCommand(std::string tParse);
	static void clearCommand(std::string tParse);
	static void exitCommand(std::string tParse);
};

#endif // CommandsSource.h