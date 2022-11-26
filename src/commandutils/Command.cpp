#include "Command.h"
#include "cylib/StringUtils.h"

#include<string>

std::string Command::DEFAULT_COMMAND_NAME = "COMMAND";
std::string Command::DEFAULT_COMMAND_DESCRIPTION = "COMMAND_DESCRIPTION";

std::string Command::createCommand(std::string name, std::string description)
{
	std::string fCommandStr;
	if (!name.empty() && !description.empty()) {
		fCommandStr = "(" + name + ") : " + StringUtils::quoteString(description);
	} else {
		fCommandStr = "(" + Command::DEFAULT_COMMAND_NAME + ") : < " + Command::DEFAULT_COMMAND_DESCRIPTION + ">";
	}
	return fCommandStr;
}

bool Command::checkCommand(std::string __base__, std::string __cmd__)
{
	bool nBool = false;
	if (!__base__.empty() && !__cmd__.empty()) {
		nBool = StringUtils::strCompare(__base__, __cmd__);
	}
	return nBool;
}

bool Command::checkCommandStartsWith(std::string __tbase__, std::string __cmdp__)
{
	bool nBool = false;
	if (!__tbase__.empty() && !__cmdp__.empty()) {
		nBool = StringUtils::startsWith(__tbase__, __cmdp__);
	}
	return nBool;
}