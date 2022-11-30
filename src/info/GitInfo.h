#ifndef GITINFO_H
#define GITINFO_H

#include<string>

class GitInfo
{
public:
	static std::string REPOSITORY_LINK;
	static void getGitInfo();
	static std::string getRepoLink();
};

#endif // GitInfo.h