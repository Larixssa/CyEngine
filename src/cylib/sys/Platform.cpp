#include "Platform.h"
#include "cylib/StringUtils.h"

#include<string>

std::string Platform::getPlatform()
{
	std::string osString;

	#ifdef _WIN32
	osString = "Windows";
	#endif

	#ifdef __linux__
	osString = "Linux";
	#endif
	
	return osString;
}

bool Platform::checkPlatform(std::string curPlatform)
{
	bool inPlatform = (StringUtils::strCompare(Platform::getPlatform(), curPlatform) ? true : false); return inPlatform;
}
