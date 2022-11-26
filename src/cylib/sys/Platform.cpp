#include "Platform.h"
#include "cylib/StringUtils.h"

#include<string>

std::string Platform::getPlatform()
{
	std::string osString;

	#if _WIN32
	osString = "Windows";
	#elif __linux__
	osString = "Linux";
	#else
	osString = "Unix";
	#endif

	return osString;
}

bool Platform::checkPlatform(std::string curPlatform)
{
	bool inPlatform = (StringUtils::strCompare(Platform::getPlatform(), curPlatform) ? true : false); return inPlatform;
}