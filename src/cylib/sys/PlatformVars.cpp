#include "PlatformVars.h"
#include "Platform.h"
#include "cylib/StringUtils.h"

#include<string>

std::string PlatformVars::CURRENT_PLATFORM = Platform::getPlatform();
bool PlatformVars::IS_WINDOWS = (StringUtils::strCompare(Platform::getPlatform(), "Windows"));
bool PlatformVars::IS_LINUX = (StringUtils::strCompare(Platform::getPlatform(), "Linux"));
