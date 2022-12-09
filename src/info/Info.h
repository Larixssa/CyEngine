#ifndef INFO_H
#define INFO_H

#include<string>

class Info
{
public:
	static std::string CONSOLE_NAME;
	static std::string VERSION_STRING;
	static std::string RELEASE_STRING;
	static std::string getConsoleName();
	static std::string getCredits();
	static std::string getVersion();
	static std::string getRelease();
	static std::string getInfo();
	static std::string getInfoOf(std::string infoOf = "version");
};

#endif // Info.h