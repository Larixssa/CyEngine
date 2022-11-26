#include "ConsoleMessage.h"
#include "cylib/StringUtils.h"

#include<string>

std::string ConsoleMessage::DEFAULT_CONSOLE_HEADER = "Console";

std::string ConsoleMessage::createConsoleMessage(std::string consoleMessage)
{
	std::string fConsoleMessage;
	if (!consoleMessage.empty()) {
		fConsoleMessage = StringUtils::surroundString(ConsoleMessage::DEFAULT_CONSOLE_HEADER, "[", "]") + " - " + consoleMessage;
	}
	return fConsoleMessage;
}
