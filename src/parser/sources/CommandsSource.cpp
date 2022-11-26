#include "CommandsSource.h"
#include "parser/CommandParser.h"
#include "init/Init.h"
#include "cylib/StringUtils.h"
#include "sys/ProcessExec.h"

#include<string>

void CommandsSource::helpCommand()
{
	CommandParser::outCommandList();
}

void CommandsSource::clearCommand()
{
	ProcessExec::processClearScreen();
}

void CommandsSource::exitCommand()
{
	exit(0);
}