#include "GitRepoInfo.h"
#include "cylib/StringUtils.h"
#include "cylib/Convert.h"

#include<string>

// DEFAULT VALUES
std::string GitRepoInfo::DEFAULT_GIT_USR = "Octocat";
std::string GitRepoInfo::DEFAULT_GIT_REPO_NAME = "OctoSpoon";
std::string GitRepoInfo::DEFAULT_GIT_DESCRIPTION = "No description provided.";
std::string GitRepoInfo::DEFAULT_FILE_TYPE = "[F]";
std::string GitRepoInfo::DEFAULT_DIR_TYPE = "[D]";
std::string GitRepoInfo::DEFAULT_REPO_TYPE = "[REPO]";
std::string GitRepoInfo::DEFAULT_RELEASE_TAG = "0.0.1";
std::string GitRepoInfo::DEFAULT_RELEASE_NAME = "Release";
std::string GitRepoInfo::DEFAULT_LICENSE_TYPE = "License";
std::string GitRepoInfo::DEFAULT_README_CONTENT = "# Repository\n[Repository Description]";
int GitRepoInfo::COMMON_COMMIT_VAL = 1;
int COMMON_STARS_COUNT = 0;
int COMMON_WATCHING_COUNT = 1;
int COMMON_FORKS_COUNT = 0;
int COMMON_RELEASES_COUNT = 0;
int COMMON_TAGS_COUNT = 0;

// GENERAL REPOSITORY METHODS
std::string GitRepoInfo::addRepoName(std::string gitUsr, std::string gitRepoName)
{
	std::string fRepoName;
	if (!gitUsr.empty() && !gitRepoName.empty())
	{
		fRepoName = GitRepoInfo::getGitType("repo") + " " + gitUsr + "/" + gitRepoName;
	}
	return fRepoName;
}

std::string GitRepoInfo::addRepoDescription(std::string repoDescription)
{
	std::string fRepoDesc;
	if (!repoDescription.empty())
	{
		fRepoDesc = "About\n" + repoDescription;
	}
	return fRepoDesc;
}

std::string GitRepoInfo::addRepoObject(std::string objectType, std::string name)
{
	std::string fRepoObjectHeader;
	if (!objectType.empty() && !name.empty())
	{
		if (StringUtils::strCompare(objectType, "file")) {
			fRepoObjectHeader = GitRepoInfo::getGitType("file") + " - " + name;
		} else if (StringUtils::strCompare(objectType, "dir")) {
			fRepoObjectHeader = GitRepoInfo::getGitType("directory") + " - " + name;
		}
	}
	return fRepoObjectHeader;
}

std::string GitRepoInfo::addLatestRelease(std::string releaseTag, std::string releaseName)
{
	std::string fReleaseName;
	if (!releaseTag.empty() && !releaseName.empty())
	{
		fReleaseName = StringUtils::surroundString(releaseTag, "[", "]") + " - " + releaseName;
	}
	return fReleaseName;
}

std::string GitRepoInfo::addCommitCount(int commitCount)
{
	std::string fCommitCountString;
	if (commitCount >= 1) {
		fCommitCountString = "[Commits]: " + Convert::intToStr(commitCount) + " commits";
	} else {
		fCommitCountString = "No commits just yet...";
	}
	return fCommitCountString;
}

std::string GitRepoInfo::addReleasesCount(int releasesCount)
{
	std::string fReleaseCount;
	if (releasesCount >= 1) {
		fReleaseCount = "Releases " + StringUtils::surroundString(Convert::intToStr(releasesCount), "(", ")");
	} else {
		fReleaseCount = "Release\nNo releases published";
	}
	return fReleaseCount;
}

std::string GitRepoInfo::addTagsCount(int tagsCount)
{
	std::string fTagCount;
	if (tagsCount == 1) {
		fTagCount = Convert::intToStr(tagsCount) + " tag.";
	} else if (tagsCount > 1) {
		fTagCount = Convert::intToStr(tagsCount) + " tags.";
	} else {
		fTagCount = "No tags published";
	}
	return fTagCount;
}

std::string GitRepoInfo::addWatchingCount(int watching)
{
	std::string fWatchingCount;
	if (watching >= 1) {
		fWatchingCount = Convert::intToStr(watching) + " watching";
	} else {
		fWatchingCount = "No one's watching...";
	}
	return fWatchingCount;
}

std::string GitRepoInfo::addStarsCount(int stars)
{
	return Convert::intToStr(stars) + " stars";
}

std::string GitRepoInfo::addForksCount(int forks)
{
	return Convert::intToStr(forks) + " forks";
}

std::string GitRepoInfo::hasReadMe(bool hasReadMeFile)
{
	return ((hasReadMeFile) ? "Readme" : "");
}

std::string GitRepoInfo::hasLicense(bool hasLicenseFile, std::string licenseType)
{
	std::string fLicense;
	if (hasLicenseFile && !licenseType.empty())
	{
		fLicense = GitRepoInfo::getLicense(licenseType);
	}
	return fLicense;
}

// GETTER METHODS
std::string GitRepoInfo::getGitUsr()
{
	return GitRepoInfo::DEFAULT_GIT_USR;
}

std::string GitRepoInfo::getGitRepoName()
{
	return GitRepoInfo::DEFAULT_GIT_REPO_NAME;
}

std::string GitRepoInfo::getGitDescription()
{
	return GitRepoInfo::DEFAULT_GIT_DESCRIPTION;
}

std::string GitRepoInfo::getReleaseTag()
{
	return GitRepoInfo::DEFAULT_RELEASE_TAG;
}

std::string GitRepoInfo::getReleaseName()
{
	return GitRepoInfo::DEFAULT_RELEASE_NAME;
}

// [UPDATED] New way of getting the common count of [VALUE].
int GitRepoInfo::getCommonCountOf(std::string countOf)
{
	int fCountOf;
	if (!countOf.empty())
	{
		if (StringUtils::strCompare(countOf, "commits")) {
			fCountOf = GitRepoInfo::COMMON_COMMIT_VAL;
		} else if (StringUtils::strCompare(countOf, "stars")) {
			fCountOf = GitRepoInfo::COMMON_STARS_COUNT;
		} else if (StringUtils::strCompare(countOf, "watching")) {
			fCountOf = GitRepoInfo::COMMON_WATCHING_COUNT;
		} else if (StringUtils::strCompare(countOf, "forks")) {
			fCountOf = GitRepoInfo::COMMON_FORKS_COUNT;
		} else if (StringUtils::strCompare(countOf, "tags")) {
			fCountOf = GitRepoInfo::COMMON_TAGS_COUNT;
		} else if (StringUtils::strCompare(countOf, "releases")) {
			fCountOf = GitRepoInfo::COMMON_RELEASES_COUNT;
		}
	}
	return fCountOf;
}

/* [OUTDATED] Replace with more practical code.
int GitRepoInfo::getCommonCommitCount()
{
	return GitRepoInfo::COMMON_COMMIT_VAL;
}

int GitRepoInfo::getCommonStarsCount()
{
	return GitRepoInfo::COMMON_STARS_COUNT;
}

int GitRepoInfo::getCommonForksCount()
{
	return GitRepoInfo::COMMON_FORKS_COUNT;
}

int GitRepoInfo::getCommonWatchingCount()
{
	return GitRepoInfo::COMMON_WATCHING_COUNT;
}

int GitRepoInfo::getCommonTagsCount()
{
	return GitRepoInfo::COMMON_TAGS_COUNT;
}

int GitRepoInfo::getCommonReleasesCount()
{
	return GitRepoInfo::COMMON_RELEASES_COUNT;
} */

std::string GitRepoInfo::getLicense(std::string __license__)
{
	std::string gLicense;
	if (!__license__.empty())
	{
		if (StringUtils::strCompare(__license__, "apache-2.0")) {
			gLicense = "Apache-2.0";
		} else if (StringUtils::strCompare(__license__, "gplv2")) {
			gLicense = "GPL-2.0";
		} else if (StringUtils::strCompare(__license__, "gplv3")) {
			gLicense = "GPL-3.0";
		} else if (StringUtils::strCompare(__license__, "lgplv3")) {
			gLicense = "LGPL-3.0";
		} else if (StringUtils::strCompare(__license__, "mit")) {
			gLicense = "MIT";
		} else if (StringUtils::strCompare(__license__, "custom")) {
			gLicense = "Custom License";
		}
	}
	return gLicense;
}

std::string GitRepoInfo::getGitType(std::string __type__)
{
	std::string fType;
	if (!__type__.empty())
	{
		if (StringUtils::strCompare(__type__, "file")) {
			fType = GitRepoInfo::DEFAULT_FILE_TYPE;
		} else if (StringUtils::strCompare(__type__, "dir")) {
			fType = GitRepoInfo::DEFAULT_DIR_TYPE;
		} else if (StringUtils::strCompare(__type__, "repo")) {
			fType = GitRepoInfo::DEFAULT_REPO_TYPE;
		}
	}
	return fType;
}

std::string GitRepoInfo::getReadMeContent(std::string readMeContent)
{
	return readMeContent;
}