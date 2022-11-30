#include "GuiTitle.h"
#include "cylib/StringUtils.h"
#include "cystdio/CyBits.h"
#include "cystdio/CyStdio.h"

std::string GuiTitle::DEFAULT_TITLE_STRING = "GUI";
std::string GuiTitle::DEFAULT_SPECIFIED_FILE = "State";
std::string GuiTitle::DEFAULT_SUBFILE_STRING = "SubState";

std::string GuiTitle::getDefTitleString()
{
	return GuiTitle::DEFAULT_TITLE_STRING;
}

std::string GuiTitle::getDefSpecFileString()
{
	return GuiTitle::DEFAULT_SPECIFIED_FILE;
}

std::string GuiTitle::getDefSubFileString()
{
	return GuiTitle::DEFAULT_SUBFILE_STRING;
}

std::string GuiTitle::createGuiTitle(std::string titleString, std::string specFile, std::string specSubFile)
{
	std::string fGuiTitle;

	if (!titleString.empty() && !specFile.empty())
	{
		if (specSubFile.empty()) {
			fGuiTitle = StringUtils::surroundString(titleString + " > " + specFile, "[", "]");
		} else {
			fGuiTitle = StringUtils::surroundString(titleString + " > " + specFile + " > " + specSubFile, "[", "]");
		}
	}

	return fGuiTitle;
}

void GuiTitle::displayGuiTitle()
{
	CyStdio::cPut(GuiTitle::createGuiTitle(
		GuiTitle::getDefTitleString(), // Title
		GuiTitle::getDefSpecFileString(), // Specified File
		GuiTitle::getDefSubFileString() // Specified Sub-file
	));
}