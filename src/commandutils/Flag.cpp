#include "Flag.h"

#include<string>

bool Flag::checkFlag(std::string baseString, std::string strFlag)
{
	bool __PARSE_FLAG__ = false;
	std::size_t LOCAL_NPOS = std::string::npos, FOUND_FLAG = baseString.find(strFlag);
	if (!baseString.empty() && !strFlag.empty()) {
		__PARSE_FLAG__ = (FOUND_FLAG != LOCAL_NPOS);
	} return __PARSE_FLAG__;
}