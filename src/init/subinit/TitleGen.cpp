#include "TitleGen.h"
#include "display/Title.h"
#include "display/Linebar.h"
#include "cystdio/CyBits.h"
#include "cystdio/CyStdio.h"

void TitleGen::generateTitle()
{
	Title::TITLE_STRING = "CyEngine";
	Title::VERSION_TITLE = "0.0.1";

	CyBits::ncNewLn();

	Title::displayTitle();

	CyStdio::cPut(
		CyBits::repeatString(CyBits::gcNewLn(), 2));

	Linebar::createLinebar("=", 65);

	CyStdio::cPut(
		CyBits::repeatString(CyBits::gcNewLn(), 2));
}