#include "GitRepo.h"
#include "GitRepoInfo.h"
#include "cystdio/CyBits.h"
#include "cystdio/CyStdio.h"

#include<string>

void GitRepo::getBaseRepo()
{
	std::string baseRepoHeader = GitRepoInfo::addRepoName(
		GitRepoInfo::getGitUsr(),
		GitRepoInfo::getGitRepoName());
	std::string commitHeader = GitRepoInfo::addCommitCount(GitRepoInfo::getCommonCountOf("commits"));
	CyStdio::cPut(baseRepoHeader + "\n" + commitHeader);

	std::string readmeFile = GitRepoInfo::getReadMeContent(GitRepoInfo::DEFAULT_README_CONTENT);
	CyStdio::cPut(readmeFile);
}

void GitRepo::displayRepoInformation()
{
	std::string basicStuff = GitRepoInfo::addRepoDescription(GitRepoInfo::getGitDescription())
							+ "\n" + CyBits::repeatString("-", 15);
							+ "\n" + GitRepoInfo::hasReadMe(true)
							+ "\n" + GitRepoInfo::hasLicense(true, GitRepoInfo::DEFAULT_LICENSE_TYPE)
							+ "\n" + GitRepoInfo::addStarsCount(GitRepoInfo::getCommonCountOf("stars"))
							+ "\n" + GitRepoInfo::addWatchingCount(GitRepoInfo::getCommonCountOf("watching"))
							+ "\n" + GitRepoInfo::addForksCount(GitRepoInfo::getCommonCountOf("forks"));
	CyStdio::cPut(basicStuff);

	CyBits::repeatString("-", 45);

	CyBits::ncNewLn();

	std::string tagsAndReleases = GitRepoInfo::addReleasesCount(GitRepoInfo::getCommonCountOf("releases"))
								+ "\n" + GitRepoInfo::addTagsCount(GitRepoInfo::getCommonCountOf("tags"));
	CyStdio::cPut(tagsAndReleases);
}
