#ifndef PLATFORMVARS_H
#define PLATFORMVARS_H

#include<string>

class PlatformVars
{
public:
	static std::string CURRENT_PLATFORM;
	static bool IS_WINDOWS;
	static bool IS_LINUX;
	static bool IS_UNIX_DEFAULT;
};

#endif // PlatformVars.h