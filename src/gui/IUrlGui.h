#ifndef IURLGUI_H
#define IURLGUI_H

#include<string>
#include "guiutils/BaseGui.h"

class IUrlGui : public BaseGui
{
public:
	static void create();
	static std::string PARSE_IURL;
	static void load();
	static void update(int status);
};

#endif // IUrlGui.h