#include "TitleGen.h"
#include "display/Title.h"
#include "display/Linebar.h"
#include "info/Info.h"
#include "cystdio/CyBits.h"
#include "cystdio/CyStdio.h"

void TitleGen::generateTitle()
{
	Title::TITLE_STRING = "CyEngine Console";
	Title::VERSION_TITLE = Info::getVersion();

	CyBits::ncNewLn();

	Title::displayTitle();

	CyStdio::cPut(
		CyBits::repeatString(CyBits::gcNewLn(), 2));

	Linebar::createLinebar("=", 65);

	CyStdio::cPut(
		CyBits::repeatString(CyBits::gcNewLn(), 2));
}