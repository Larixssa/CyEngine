#ifndef COMMAND_H
#define COMMAND_H

#include<string>

class Command
{
public:
	static std::string DEFAULT_COMMAND_NAME;
	static std::string DEFAULT_COMMAND_DESCRIPTION;
	static std::string createCommand(std::string name, std::string description);
	static bool checkCommand(std::string __base__, std::string __cmd__);
	static bool checkCommandStartsWith(std::string __tbase__, std::string __cmdp__);
};

#endif // Command.h