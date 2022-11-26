#ifndef TITLE_H
#define TITLE_H

#include<string>

class Title
{
public:
	static std::string TITLE_STRING;
	static std::string VERSION_TITLE;
	static std::string createTitle(std::string titleString, std::string versionString);
	static void displayTitle();
};

#endif // Title.h