#include "IUrlGui.h"
#include "guiutils/GuiTitle.h"
#include "guiutils/GuiGuide.h"
#include "display/Prompt.h"
#include "cylib/StringUtils.h"
#include "cystdio/CyStdio.h"
#include "cystdio/CyBits.h"
#include "browser/Browser.h"
#include "init/Init.h"

#include<string>

std::string IUrlGui::PARSE_IURL = "";

void IUrlGui::create()
{
	const int guideTableSize = 2;
	std::string uInput;
	GuiTitle::DEFAULT_SPECIFIED_FILE = "IUrl";
	GuiTitle::DEFAULT_SUBFILE_STRING = "";
	Prompt::DEFAULT_INPUT_TEXT = "Input URL";

	std::string guideTable[guideTableSize] = {
		"Input the desired URL in the prompt.",
		"Once inputted, you will be led to the URL."
	};

	GuiTitle::displayGuiTitle();

	GuiGuide::pushGuide(guideTable, guideTableSize);
	GuiGuide::displayExitString();

	Prompt::displayInputPrompt();

	CyStdio::cGet(uInput);

	CyBits::ncNewLn();

	if (!uInput.empty()) {
		IUrlGui::PARSE_IURL = uInput;
		update(1);
	} else {
		update(0);
	}
}

void IUrlGui::update(int status)
{
	std::string parse_var = IUrlGui::PARSE_IURL;
	if (status == 1) // Check if string equals to exit or not.
	{
		if (!StringUtils::strCompare(parse_var, "exit")) {
			Browser::openUrl(IUrlGui::PARSE_IURL);
		} else {
			update(0);
		}
	}
	else if (status == 0) // Exit.
	{
		Init::initClient(false, false, true);
	}
}

void IUrlGui::load()
{
	create();
}