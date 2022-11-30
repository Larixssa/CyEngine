#ifndef CYSTDIO_H
#define CYSTDIO_H

#include<string>

class CyStdio
{
public:
	static void cPut(std::string putString);
	static void cPutLn(std::string putStringF);
	static void cGet(std::string &iStr);
};

#endif // CyStdio.h