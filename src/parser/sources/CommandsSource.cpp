#include "CommandsSource.h"
#include "parser/CommandParser.h"
#include "init/Init.h"
#include "cylib/StringUtils.h"

#include<string>

void helpCommand(std::string tParse)
{
	CommandParser::outCommandList();
}

void exitCommand(std::string tParse)
{
	if (StringUtils::strCompare(tParse, "exit")) {
		exit(0);
	} else {
		Init::initClient(false, false, false);
	}
}