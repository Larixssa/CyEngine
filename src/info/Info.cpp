#include "Info.h"
#include "cylib/StringUtils.h"
#include "cystdio/CyBits.h"

#include<string>

std::string Info::CONSOLE_NAME = "CyEngine Console";
std::string Info::VERSION_STRING = "0.0.1";
std::string Info::RELEASE_STRING = "01-al12";

std::string Info::getCredits()
{
	const int defaultStringLength = 10;
	std::string fCreditsStr = CyBits::repeatString("=", defaultStringLength) + " Credits " + CyBits::repeatString("=", defaultStringLength)
							+ "\nCreator / Main Developer: Lari_ssa (Larixssa)"
							+ "\nGitLib & ProcessLib by Equinoxtic"
							+ "\nMade in C++ w/ CMake";
	return fCreditsStr;
}

std::string Info::getConsoleName()
{
	return Info::CONSOLE_NAME;
}

std::string Info::getVersion()
{
	return Info::VERSION_STRING;
}

std::string Info::getRelease()
{
	return Info::RELEASE_STRING;
}

std::string Info::getInfo()
{
	std::string fInfoString = Info::getConsoleName()
							+ "\n" + CyBits::repeatString("-", 25)
							+ "\nBuild Version: " + Info::getVersion()
							+ "\nRelease Build: " + Info::getRelease();
	return fInfoString;
}

std::string Info::getInfoOf(std::string infoOf)
{
	std::string fInfoString;

	if (!infoOf.empty())
	{
		if (StringUtils::strCompare(infoOf, "version")) {
			fInfoString = "Version: " + Info::getVersion();
		} else if (StringUtils::strCompare(infoOf, "release")) {
			fInfoString = "Release: " + Info::getRelease();
		} else if (StringUtils::strCompare(infoOf, "name")) {
			fInfoString = Info::getConsoleName();
		} else {
			fInfoString = Info::getVersion();
		}
	}
	else
	{
		fInfoString = Info::getConsoleName();
	}

	return fInfoString;
}