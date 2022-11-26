#ifndef BROWSER_H
#define BROWSER_H

#include<string>

class Browser
{
public:
	static void openUrl(std::string url);
	static void getUrlInfo(std::string url);
};

#endif // Browser.h