#ifndef GITREPOINFO_H
#define GITREPOINTO_H

#include<string>

class GitRepoInfo
{
public:

	// DEFAULT VALUES
	static std::string DEFAULT_GIT_USR;
	static std::string DEFAULT_GIT_REPO_NAME;
	static std::string DEFAULT_GIT_DESCRIPTION;
	static std::string DEFAULT_FILE_TYPE;
	static std::string DEFAULT_DIR_TYPE;
	static std::string DEFAULT_REPO_TYPE;
	static std::string DEFAULT_RELEASE_TAG;
	static std::string DEFAULT_RELEASE_NAME;
	static std::string DEFAULT_LICENSE_TYPE;
	static std::string DEFAULT_README_CONTENT;
	static int COMMON_COMMIT_VAL;
	static int COMMON_STARS_COUNT;
	static int COMMON_WATCHING_COUNT;
	static int COMMON_FORKS_COUNT;
	static int COMMON_RELEASES_COUNT;
	static int COMMON_TAGS_COUNT;

	// GENERAL REPOSITORY METHODS
	static std::string addRepoName(std::string gitUsr, std::string gitRepoName);
	static std::string addRepoDescription(std::string repoDescription);
	static std::string addRepoObject(std::string objectType, std::string name);
	static std::string addLatestRelease(std::string releaseTag, std::string releaseName);
	static std::string addCommitCount(int commitCount);
	static std::string addReleasesCount(int releasesCount);
	static std::string addTagsCount(int tagsCount);
	static std::string addWatchingCount(int watching);
	static std::string addStarsCount(int stars);
	static std::string addForksCount(int forks);
	static std::string hasReadMe(bool hasReadMeFile);
	static std::string hasLicense(bool hasLicenseFile, std::string licenseType);
	static std::string getReadMeContent(std::string readmeContent);

	// GETTER METHODS
	static std::string getGitUsr();
	static std::string getGitRepoName();
	static std::string getGitDescription();
	static std::string getReleaseTag();
	static std::string getReleaseName();
	static std::string getLicense(std::string __license__);

	/* [OUTDATED] Old way of getting the count of [THIS].
	static int getCommonCommitCount();
	static int getCommonStarsCount();
	static int getCommonWatchingCount();
	static int getCommonForksCount();
	static int getCommonTagsCount();
	static int getCommonReleasesCount();
	*/

	static int getCommonCountOf(std::string countOf); // New Implementation.
	static std::string getGitType(std::string __type__);
};

#endif // GitRepoInfo.h