#ifndef CYBITS_H
#define CYBITS_H

#include<string>

class CyBits
{
public:
	static void ncNewLn();
	static std::string gcNewLn();
	static std::string gcTab();
	static std::string gcSpace();
	static std::string backSpace(int times);
	static std::string repeatString(std::string str, int length);
};

#endif // CyBits.h