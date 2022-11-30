#ifndef GUITITLE_H
#define GUITITLE_H

#include<string>

class GuiTitle
{
public:
	static std::string DEFAULT_TITLE_STRING;
	static std::string DEFAULT_SPECIFIED_FILE;
	static std::string DEFAULT_SUBFILE_STRING;
	static std::string getDefTitleString();
	static std::string getDefSpecFileString();
	static std::string getDefSubFileString();
	static std::string createGuiTitle(std::string titleString, std::string specFile, std::string specSubFile = "");
	static void displayGuiTitle();
};

#endif // GuiTitle.h