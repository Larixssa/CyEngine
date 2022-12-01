// Main Includes
#include "CommandsSource.h"
#include "parser/CommandParser.h"
#include "init/Init.h"
#include "cylib/StringUtils.h"
#include "commandutils/Flag.h"
#include "cystdio/CyBits.h"
#include "sys/ProcessExec.h"
#include "info/GitInfo.h"
#include "gui/InfoGui.h"

// GUI Includes
#include "gui/GitRepoGui.h"

#include<string>

void CommandsSource::helpCommand()
{
	CyBits::ncNewLn();
	CommandParser::outCommandList();
	CyBits::ncNewLn();
}

void CommandsSource::versionCommand(std::string tParse)
{
	if (Flag::checkFlag(tParse, "--client")) {
		InfoGui::DEFAULT_SPEC_INFO = "version";
		InfoGui::load();
	}  else if (Flag::checkFlag(tParse, "--release")) {
		InfoGui::DEFAULT_SPEC_INFO = "release";
		InfoGui::load();
	} else {
		InfoGui::displayConsoleInfo();
	}
}

void CommandsSource::getGitCommand(std::string tParse)
{
	if (Flag::checkFlag(tParse, "--info")) {
		GitRepoGui::load();
	} else {
		ProcessExec::processOpen("git"); CyBits::ncNewLn();
	}
}

void CommandsSource::clearCommand()
{
	ProcessExec::processClearScreen();
}

void CommandsSource::reinitCommand()
{
	Init::initClient(true, true, true);
}

void CommandsSource::exitCommand()
{
	ProcessExec::processClearScreen();
	exit(0);
}
