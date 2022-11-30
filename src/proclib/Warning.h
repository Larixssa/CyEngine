#ifndef WARNING_H
#define WARNING_H

#include<string>

class Warning
{
public:
	static std::string DEFAULT_WARNING_HEADER;
	static std::string DEFAULT_WARNING_SPEC;
	static std::string DEFAULT_SPEC_VALUE;
	static std::string processWarning(std::string warningSpec, std::string specValue);
	static std::string emptyShellInput();
	static std::string invalidLink(std::string val);
	static void displayWarningMessage();
};

#endif // Warning.h