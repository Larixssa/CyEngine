#include "Init.h"
#include "subinit/TitleGen.h"
#include "subinit/InputGen.h"
#include "sys/ProcessExec.h"
#include "parser/CommandParser.h"

#include<iostream>
#include<string>

void Init::initClient(bool showOptions, bool showTitle, bool clearScreen)
{
	std::string cmdInput;

	if (clearScreen) { ProcessExec::processClearScreen(); }

	if (showTitle) {
		TitleGen::generateTitle();
	}

	InputGen::generateUserInput();

	std::getline(std::cin, cmdInput);

	if (!cmdInput.empty()) {
		CommandParser::handleCommand(cmdInput);
	} else {
		Init::initClient(false, false, false);
	}
}