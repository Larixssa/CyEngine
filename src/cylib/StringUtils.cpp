#include "StringUtils.h"

#include<string>

std::string StringUtils::quoteString(std::string __content__)
{
	return "\"" + __content__ + "\"";
}

std::string StringUtils::surroundString(std::string __content__, std::string __surround_with_a__, std::string __surround_with_b__)
{
	return __surround_with_a__ + __content__ + __surround_with_b__;
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

bool StringUtils::findString(std::string baseString, std::string findString)
{
	bool FOUND = false;
	std::size_t LOCAL_NPOS = std::string::npos, FOUND_STRING = baseString.find(findString);
	if (!baseString.empty() && !findString.empty()) {
		FOUND = (FOUND_STRING != LOCAL_NPOS);
	} return FOUND;
}