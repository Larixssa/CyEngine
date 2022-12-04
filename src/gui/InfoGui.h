#ifndef INFOGUI_H
#define INFOGUI_H

#include "guiutils/BaseGui.h"
#include<string>

class InfoGui : public BaseGui
{
public:
	static void create();
	static std::string DEFAULT_SPEC_INFO;
	static void displayCredits();
	static void displayConsoleInfo();
	static void specDisplayInfo();
	static void load();
};

#endif // InfoGui.h