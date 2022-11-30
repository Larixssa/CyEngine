// Main Includes
#include "CommandsSource.h"
#include "parser/CommandParser.h"
#include "init/Init.h"
#include "cylib/StringUtils.h"
#include "cystdio/CyBits.h"
#include "sys/ProcessExec.h"
#include "info/GitInfo.h"

// GUI Includes
#include "gui/GitRepoGui.h"

#include<string>

void CommandsSource::helpCommand()
{
	CyBits::ncNewLn();
	CommandParser::outCommandList();
	CyBits::ncNewLn();
}

void CommandsSource::getGitCommand(std::string tParse)
{
	if (StringUtils::findString(tParse, "--info")) {
		GitRepoGui::load();
	} else {
		GitInfo::getGitInfo();
	}
}

void CommandsSource::clearCommand()
{
	ProcessExec::processClearScreen();
}

void CommandsSource::exitCommand()
{
	ProcessExec::processClearScreen();
	exit(0);
}
