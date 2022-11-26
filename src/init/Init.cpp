#include "Init.h"
#include "subinit/TitleGen.h"
#include "subinit/InputGen.h"
#include "sys/ProcessExec.h"

#include<iostream>

void Init::initClient(bool showOptions, bool showTitle, bool clearScreen)
{
	if (clearScreen) { ProcessExec::processClearScreen(); }

	if (showTitle) {
		TitleGen::generateTitle();
	}

	InputGen::generateUserInput();
}