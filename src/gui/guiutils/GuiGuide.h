#ifndef GUIGUIDE_H
#define GUIGUIDE_H

#include<string>

class GuiGuide
{
public:
	static std::string DEFAULT_GUIDE_HEADER;
	static std::string DEFAULT_EXIT_GUIDE;
	static std::string createGuide(std::string guideContent);
	static std::string getExitString();
	static void pushGuide(std::string* pushGuideTable, int cSize);
};

#endif // GuiGuide.h