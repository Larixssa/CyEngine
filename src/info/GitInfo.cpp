#include "GitInfo.h"
#include "gitlib/GitMD.h"
#include "cylib/StringUtils.h"
#include "cystdio/CyStdio.h"
#include "cystdio/CyBits.h"
#include "display/Prompt.h"
#include "browser/Browser.h"

#include<string>

std::string GitInfo::REPOSITORY_LINK = "https://github.com/Larixssa/CyEngine.git";

void GitInfo::getGitInfo(bool requireInput)
{
	const int readmeContentSize = 5;

	std::string openOption;

	/* CyEngine README
	* 01 ###### CyEngine ######
	* 02
	* 03 * A Command-Line-Interface (CLI) Engine for creating, parsing and executing commands
	* 04 provided with a large utility of libraries that make executing and making commands easier.
	* 05
	* 06 * Also provides minimal console GUIs. They are modifiable, customizable and can be made
	* 07 by your own from code.
	* 08
	* 09 > This was all made in C++ with CMake. (MSVC)
	* 10
	* 11 ; Lari_ssa <3.
	*/

	Prompt::DEFAULT_YX_INPUT_TEXT = "Open Repository Link?";

	std::string readmeContent[readmeContentSize] = {
		"###### CyEngine ######",
		GitMD::bulletpointText("A Command-Line-Interface (CLI) Engine for creating, parsing and executing commands\nprovided with a large utility of libraries that make executing and making commands easier."),
		GitMD::bulletpointText("Also provides minimal console GUIs. They are modifiable, customizable and can be made\nby your own from code."),
		"> This was all made in C++ with CMake. (MSVC)",
		"; Lari_ssa <3."
	};

	CyBits::ncNewLn();

	for (int i = 0; i < readmeContentSize; ++i) {
		CyStdio::cPut(readmeContent[i] + "\n\n");
	}

	CyStdio::cPut(
		"Repository Link: " +
		GitInfo::getRepoLink() +
		CyBits::repeatString("\n", 2)
	);

	if (requireInput)
	{
		Prompt::displayYxOptionPrompt();
		CyStdio::cGet(openOption);
		if (StringUtils::strCompare(openOption, "y") || StringUtils::strCompare(openOption, "Y")) {
			Browser::openUrl("https://github.com/Larixssa/CyEngine.git");
		}
	}
}

std::string GitInfo::getRepoLink()
{
	return GitInfo::REPOSITORY_LINK;
}