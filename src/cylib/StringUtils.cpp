#include "StringUtils.h"

#include<string>

std::string StringUtils::quoteString(std::string __content__)
{
	return "\"" + __content__ + "\"";
}

std::string StringUtils::toUpperString(std::string __str__)
{
	std::string newString;
	for (int i = 0; i < __str__.length(); i++)
	{
		newString[i] = toupper(__str__[i]);
	}
	return newString;
}

std::string StringUtils::toLowerString(std::string __str__)
{
	std::string newString;
	for (int i = 0; i < __str__.length(); i++)
	{
		newString[i] = tolower(__str__[i]);
	}
	return newString;
}

bool StringUtils::strCompare(std::string __stra__, std::string __strb__)
{
	return __stra__.compare(__strb__) == 0;
}

bool StringUtils::startsWith(const std::string& str, const std::string& prefix)
{
	return str.size() >= prefix.size() && str.compare(0, prefix.size(), prefix) == 0;
}