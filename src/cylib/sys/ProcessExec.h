#ifndef PROCEXEC_H
#define PROCEXEC_H

#include<string>

class ProcessExec
{
public:
	static void processExit();
	static void processOpen(std::string command);
	static void processClearScreen();
};

#endif // ProesscExec.h