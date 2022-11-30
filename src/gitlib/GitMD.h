#ifndef GITMD_H
#define GITMD_H

#include<string>

class GitMD
{
public:
	static std::string createHeader(std::string headerName);
	static std::string createSubHeader(std::string subHeaderName);
	static std::string bulletpointText(std::string text);
	static std::string indentedBulletPoint(std::string text);
	static std::string impText(std::string textContent);
	static std::string strongText(std::string textContent);
	static std::string markText(std::string textContent);
	static std::string createSplit();
};

#endif // GitMD.h