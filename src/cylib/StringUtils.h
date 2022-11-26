#ifndef STRINGUTILS_H
#define STRINGUTILS_H

#include<string>

class StringUtils
{
public:
	static std::string quoteString(std::string __content__);
	static std::string StringUtils::surroundString(std::string __content__, std::string __surround_with_a__, std::string __surround_with_b__);
	static std::string toUpperString(std::string __str__);
	static std::string toLowerString(std::string __str__);
	static bool strCompare(std::string __stra__, std::string __strb__);
	static bool startsWith(const std::string& str, const std::string& prefix);
};

#endif // StrUtils.h