#include "Flag.h"
#include "cylib/StringUtils.h"

#include<string>

bool Flag::checkFlag(std::string baseString, std::string strFlag)
{
	bool FOUND_FLAG = StringUtils::findString(baseString, strFlag); return FOUND_FLAG;
}