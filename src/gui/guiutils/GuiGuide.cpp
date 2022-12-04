#include "GuiGuide.h"
#include "cylib/StringUtils.h"
#include "cystdio/CyBits.h"
#include "cystdio/CyStdio.h"

#include<string>

std::string GuiGuide::DEFAULT_GUIDE_HEADER = "-----< Guide >-----";

std::string GuiGuide::DEFAULT_EXIT_GUIDE = "Type in " + StringUtils::quoteString("exit") + " to exit out of the process.";

std::string GuiGuide::createGuide(std::string guideContent)
{
	std::string fGuideContent;
	
	if (!guideContent.empty())
	{
		fGuideContent = "* " + guideContent;
	}

	return fGuideContent;
}

std::string GuiGuide::getExitString()
{
	return GuiGuide::DEFAULT_EXIT_GUIDE;
}

void GuiGuide::pushGuide(std::string* pushGuideTable, int cSize)
{
	for (int i = 0; i < cSize; i++)
	{
		CyStdio::cPut(GuiGuide::createGuide(pushGuideTable[i] + CyBits::gcNewLn()));
	}
}

void GuiGuide::displayExitString()
{
	CyStdio::cPut(GuiGuide::createGuide(GuiGuide::getExitString()) + CyBits::repeatString("\n", 2));
}