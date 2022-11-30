#include "Error.h"
#include "cylib/StringUtils.h"
#include "cystdio/CyStdio.h"

#include<string>

std::string Error::DEFAULT_ERROR_HEADER = "ERROR";
std::string Error::DEFAULT_ERROR_TYPE = "invalidContent";
std::string Error::DEFAULT_ERROR_VALUE = "value";
std::string Error::DEFAULT_ERROR_SPEC = "spec";

std::string Error::processError(std::string errType, std::string errValue, std::string errSpec)
{
	std::string fErrorString;
	if (!errType.empty())
	{
		if (StringUtils::strCompare(errValue, "invalidContent")) {
			
		}
	}
	return fErrorString;
}

std::string Error::invalidContent(std::string v, std::string sp)
{
	return StringUtils::surroundString(Error::DEFAULT_ERROR_HEADER, "[", "]") + ": " + v + " " + StringUtils::quoteString(sp) + ", is invalid.";
}

std::string Error::doesNotExist(std::string p, std::string t)
{
	return StringUtils::surroundString(Error::DEFAULT_ERROR_HEADER, "[", "]") + ": " + p + " " + StringUtils::quoteString(t) + ", does not exist.";
}

std::string Error::runTimeError(std::string f, std::string vt)
{
	std::string rtErrorString;
	if (!f.empty()) {
		if (StringUtils::strCompare(f, "missingDependencies")) {
			rtErrorString = vt + " has missing dependencies.";
		} else if (StringUtils::strCompare(f, "missingComponents")) {
			rtErrorString = "Missing components have been identified in " + vt;
		}
	}
	return StringUtils::surroundString(Error::DEFAULT_ERROR_HEADER, "[", "]") + rtErrorString;
}
