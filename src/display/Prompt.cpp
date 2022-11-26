#include "Prompt.h"
#include "cylib/StringUtils.h"
#include "cystdio/CyStdio.h"

#include<string>

std::string Prompt::DEFAULT_INPUT_TEXT = "Input String";
std::string Prompt::DEFAULT_YXCONTENT_TEXT = "Y/X";
std::string Prompt::DEFAULT_YX_PROMPT_TYPE = "default";
std::string Prompt::YX_CUSTOM_SURROUND_L = "[";
std::string Prompt::YX_CUSTOM_SURROUND_R = "]";
std::string Prompt::DEFAULT_SHELL_PROMPT_TEXT = "usr/console";

std::string Prompt::createInputPrompt(std::string inputText)
{
	std::string fInputText;
	if (!inputText.empty())
	{
		fInputText = "[" + inputText + "] > ";
	}
	return fInputText;
}

std::string Prompt::createYxOptionPrompt(std::string yxContent, std::string promptType)
{
	std::string fPromptString;
	if (!yxContent.empty() && !promptType.empty())
	{
		if (StringUtils::strCompare(promptType, "default")) {
			fPromptString = StringUtils::surroundString(yxContent, "(", ")");
		} else if (StringUtils::strCompare(promptType, "custom")) {
			fPromptString = StringUtils::surroundString(yxContent, Prompt::YX_CUSTOM_SURROUND_L, Prompt::YX_CUSTOM_SURROUND_R);
		}
	}
	return fPromptString;
}

std::string Prompt::createShellPrompt(std::string shellPromptText)
{
	std::string fShellPromptText;
	if (!shellPromptText.empty())
	{
		fShellPromptText = shellPromptText + "\n> ";
	}
	return fShellPromptText;
}

void Prompt::displayInputPrompt()
{
	CyStdio::cPut(Prompt::createInputPrompt(Prompt::DEFAULT_INPUT_TEXT));
}

void Prompt::displayYxOptionPrompt()
{
	CyStdio::cPut(Prompt::createYxOptionPrompt(Prompt::DEFAULT_YXCONTENT_TEXT, Prompt::DEFAULT_YX_PROMPT_TYPE));
}

void Prompt::displayShellPrompt()
{
	CyStdio::cPut(Prompt::createShellPrompt(Prompt::DEFAULT_SHELL_PROMPT_TEXT));
}