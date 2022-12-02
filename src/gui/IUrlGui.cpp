#include "IUrlGui.h"
#include "guiutils/GuiTitle.h"
#include "guiutils/GuiGuide.h"
#include "display/Prompt.h"
#include "cylib/StringUtils.h"
#include "cystdio/CyStdio.h"
#include "cystdio/CyBits.h"
#include "browser/Browser.h"

#include<string>

std::string IUrlGui::PARSE_IURL = "";

void IUrlGui::create()
{
	std::string uInput;
	GuiTitle::DEFAULT_SPECIFIED_FILE = "IUrl";
	GuiTitle::DEFAULT_SUBFILE_STRING = "";
	Prompt::DEFAULT_INPUT_TEXT = "Input URL";

	GuiTitle::displayGuiTitle();

	Prompt::displayInputPrompt();

	CyStdio::cGet(uInput);

	if (!uInput.empty())
	{
		IUrlGui::PARSE_IURL = uInput;
	}

	IUrlGui::update(1);
}

void IUrlGui::update(int status)
{
	if (status == 1)
	{
		Browser::openUrl(IUrlGui::PARSE_IURL);
	}
}

void IUrlGui::load()
{
	IUrlGui gui;
	gui.create();
}