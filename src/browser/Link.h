#ifndef LINK_H
#define LINK_H

#include<string>

class Link
{
public:
	static std::string DEFAULT_HTTPS_PROTOCOL;
	static std::string DEFAULT_HTTP_PROTOCOL;
	static std::string initLink(std::string urlString, std::string protocol = "https");
	static std::string getLink(std::string urlString, std::string protocol = "https");
	static void outputLink(std::string url, std::string protocol = "https");
	static void openLink(std::string url);
};

#endif // Link.h