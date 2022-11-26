#ifndef CONSOLEMESSAGE_H
#define CONSOLEMESSAGE_H

#include<string>

class ConsoleMessage
{
public:
	static std::string DEFAULT_CONSOLE_HEADER;
	static std::string createConsoleMessage(std::string consoleMessage);
};

#endif // ConsoleMessage.h