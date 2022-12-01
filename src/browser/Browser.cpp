#include "Browser.h"
#include "Link.h"

#include<string>

void Browser::openUrl(std::string url)
{
	if (!url.empty())
	{
		Link::openLink(url);
	}
}

std::string Browser::getUrlInfo(std::string url)
{
	std::string fStringUrl;
	if (!url.empty())
	{
		fStringUrl = Link::getLink(url);
	}
	return fStringUrl;
}