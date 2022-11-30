#include "GitMD.h"
#include "cylib/StringUtils.h"
#include "cystdio/CyBits.h"

#include<string>

std::string GitMD::createHeader(std::string headerName)
{
	std::string fHeader;
	if (!headerName.empty())
	{
		fHeader = "#" + headerName + CyBits::gcNewLn() + CyBits::repeatString("=", 45);
	}
	return fHeader;
}

std::string GitMD::createSubHeader(std::string subHeaderName)
{
	std::string fSubHeader;
	if (!subHeaderName.empty())
	{
		fSubHeader = CyBits::repeatString(CyBits::gcSpace(), 2) + "+ " + subHeaderName;
	}
	return fSubHeader;
}

std::string GitMD::createSplit()
{
	return CyBits::repeatString("-", 45);
}

std::string GitMD::bulletpointText(std::string text)
{
	return "* " + text;
}

std::string GitMD::indentedBulletPoint(std::string text)
{
	return CyBits::gcTab() + "- " + text;
}

std::string GitMD::impText(std::string textContent)
{
	return StringUtils::surroundString(textContent, "[", "]");
}

std::string GitMD::strongText(std::string textContent)
{
	return StringUtils::surroundString(textContent, "*", "*");
}

std::string GitMD::markText(std::string textContent)
{
	return StringUtils::surroundString(textContent, "(", ")");
}
