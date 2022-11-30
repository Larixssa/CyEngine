#include "Warning.h"
#include "cylib/StringUtils.h"
#include "cystdio/CyStdio.h"

#include<string>

std::string Warning::DEFAULT_WARNING_HEADER = "WARNING";
std::string Warning::DEFAULT_WARNING_SPEC = "emptyShellInput";
std::string Warning::DEFAULT_SPEC_VALUE = "value";

std::string Warning::processWarning(std::string warningSpec, std::string specValue)
{
	std::string fWarningString;

	if (!warningSpec.empty())
	{
		if (StringUtils::strCompare(warningSpec, "emptyShellInput")) {
			fWarningString = Warning::emptyShellInput();
		} else if (StringUtils::strCompare(warningSpec, "invalidLink")) {
			fWarningString = Warning::invalidLink(specValue);
		}
	}
	else
	{
		fWarningString = Warning::emptyShellInput();
	}

	return fWarningString;
}

std::string Warning::emptyShellInput()
{
	return StringUtils::surroundString(Warning::DEFAULT_WARNING_HEADER, "[", "]") + ": Empty input on prompt, please try again with input this time.";
}

std::string Warning::invalidLink(std::string val)
{
	return StringUtils::surroundString(Warning::DEFAULT_WARNING_HEADER, "[", "]") + ": The link, " + StringUtils::quoteString(val) + " is unavailable.";
}

void Warning::displayWarningMessage()
{
	CyStdio::cPut(Warning::processWarning(Warning::DEFAULT_WARNING_SPEC, Warning::DEFAULT_SPEC_VALUE));
}