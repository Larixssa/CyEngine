#include "GitRepoGui.h"
#include "cylib/StringUtils.h"
#include "cystdio/CyStdio.h"
#include "cystdio/CyBits.h"
#include "info/GitInfo.h"

void GitRepoGui::create(bool requireInput)
{
	CyStdio::cPut(
		CyBits::repeatString("\n", 2) + 
		"[CyEngine - README]" + 
		CyBits::gcNewLn()
	);

	if (requireInput) {
		update(1);
	} else {
		update(2);
	}

	CyStdio::cPut(CyBits::repeatString("\n", 2));
}

void GitRepoGui::update(int status)
{
	if (status == 1) {
		GitInfo::getGitInfo(true);
	} else if (status == 2) {
		GitInfo::getGitInfo(false);
	}
}

void GitRepoGui::load(bool requireInput)
{
	create(requireInput);
}
