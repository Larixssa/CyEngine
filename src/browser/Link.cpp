#include "Link.h"
#include "cylib/StringUtils.h"
#include "cystdio/CyStdio.h"
#include "cylib/sys/PlatformVars.h"
#include "cylib/sys/ProcessExec.h"

#include<string>

std::string Link::DEFAULT_HTTPS_PROTOCOL = "https://";
std::string Link::DEFAULT_HTTP_PROTOCOL = "http://";

std::string Link::initLink(std::string urlString, std::string protocol)
{
	std::string fUrl;
	std::string fProtocol;
	if (!urlString.empty() && !protocol.empty())
	{
		if (StringUtils::strCompare(protocol, "https")) {
			fProtocol = Link::DEFAULT_HTTPS_PROTOCOL;
		} else {
			fProtocol = Link::DEFAULT_HTTP_PROTOCOL;
		}
		fUrl = fProtocol + urlString;
	}
	return fUrl;
}

std::string Link::getLink(std::string urlString, std::string protocol)
{
	std::string fullUrl;
	if (!urlString.empty() && !protocol.empty()) {
		fullUrl = Link::initLink(urlString, protocol);
	}
	return fullUrl;
}

void Link::outputLink(std::string url, std::string protocol = "https")
{
	std::string outUrl = Link::initLink(url, protocol);
	if (!url.empty() && !protocol.empty()) {
		CyStdio::cPut(outUrl);
	}
}

void Link::openLink(std::string url)
{
	std::string commandPrefix;
	if (!url.empty())
	{
		if (PlatformVars::IS_WINDOWS) {
			if (!StringUtils::startsWith(url, "http")) {
				commandPrefix = "start " + Link::getLink(url);
			} else {
				commandPrefix = "start " + url;
			}
		} else if (PlatformVars::IS_LINUX) {
			if (!StringUtils::startsWith(url, "http")) {
				commandPrefix = "xdg-open " + Link::getLink(url);
			} else {
				commandPrefix = "xdg-open " + url;
			}
		}
		ProcessExec::processOpen(commandPrefix);
	}
}