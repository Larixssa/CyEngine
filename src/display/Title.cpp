#include "Title.h"
#include "cystdio/CyStdio.h"

#include<string>

std::string Title::TITLE_STRING = "Title-Here";
std::string Title::VERSION_TITLE = "Version-Here";

std::string Title::createTitle(std::string titleString, std::string versionString)
{
	std::string DEFAULT_TITLE_STRING = "TITLE";
	std::string DEFAULT_TITLE_VERSION = "0.0.0";

	std::string fTitleString;

	if (!titleString.empty()) {
		if (!versionString.empty()) {
			fTitleString = "[ " + titleString + " - " + versionString + " ]";
		} else {
			fTitleString = "[ " + titleString + " ]";
		}
	}

	// Check if both title and version strings are empty.
	if (titleString.empty() && versionString.empty()) {
		fTitleString = "[ " + DEFAULT_TITLE_STRING + " - " + DEFAULT_TITLE_VERSION + " ]";
	}

	return fTitleString;
}

void Title::displayTitle()
{
	CyStdio::cPut(createTitle(Title::TITLE_STRING, Title::VERSION_TITLE));
}