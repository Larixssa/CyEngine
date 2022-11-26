#ifndef PLATFORM_H
#define PLATFORM_H

#include<string>

class Platform
{
public:
	static std::string getPlatform();
	static bool checkPlatform(std::string curPlatform);
};

#endif //Platform.h