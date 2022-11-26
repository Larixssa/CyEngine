#include "ConsoleMessageDisplayer.h"
#include "parser/ConsoleMessage.h"

std::string ConsoleMessageDisplayer::DEFAULT_CONSOLE_MESSAGE = "MESSAGE_DATA";

void ConsoleMessageDisplayer::displayConsoleMessage()
{
	ConsoleMessage::createConsoleMessage(ConsoleMessageDisplayer::DEFAULT_CONSOLE_MESSAGE);
}