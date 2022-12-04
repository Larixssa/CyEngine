#include "GitRepoGui.h"
#include "cylib/StringUtils.h"
#include "cystdio/CyStdio.h"
#include "cystdio/CyBits.h"
#include "info/GitInfo.h"

void GitRepoGui::create()
{
	CyStdio::cPut("\n[CyEngine - README]" + CyBits::gcNewLn());
	GitInfo::getGitInfo();
	CyStdio::cPut("Repository Link: " + GitInfo::getRepoLink() + CyBits::repeatString("\n", 2));
}

void GitRepoGui::load()
{
	create();
}
