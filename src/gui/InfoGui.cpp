#include "InfoGui.h"
#include "info/Info.h"
#include "cystdio/CyStdio.h"
#include "cystdio/CyBits.h"

#include<string>

std::string InfoGui::DEFAULT_SPEC_INFO = "version";

void InfoGui::displayCredits()
{
	CyStdio::cPut(Info::getCredits());
}

void InfoGui::displayConsoleInfo()
{
	CyStdio::cPut(
			CyBits::gcNewLn() +
			Info::getInfo() +
			CyBits::repeatString("\n", 2));
}

void InfoGui::specDisplayInfo()
{
	CyStdio::cPut(Info::getInfoOf(InfoGui::DEFAULT_SPEC_INFO));
}

void InfoGui::create()
{
	InfoGui::specDisplayInfo();
}

void InfoGui::load()
{	
	CyBits::ncNewLn();
	create();
	CyStdio::cPut(CyBits::repeatString("\n", 2));
}