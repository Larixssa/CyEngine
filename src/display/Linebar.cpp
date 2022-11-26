#include "Linebar.h"
#include "cystdio/CyBits.h"
#include "cystdio/CyStdio.h"

#include<string>

void Linebar::createLinebar(std::string linebarString, int linebarLength)
{
	int maxLineLength = 100;

	if (linebarLength >= 100) {
		linebarLength = maxLineLength;
	}

	CyStdio::cPut(CyBits::repeatString(linebarString, linebarLength));
}