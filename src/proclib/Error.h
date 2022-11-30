#ifndef ERROR_H
#define ERROR_H

#include<string>

class Error
{
public:
	static std::string DEFAULT_ERROR_HEADER;
	static std::string DEFAULT_ERROR_TYPE;
	static std::string DEFAULT_ERROR_VALUE;
	static std::string DEFAULT_ERROR_SPEC;
	static std::string processError(std::string errType, std::string errValue, std::string errSpec);
	static std::string invalidContent(std::string v, std::string sp);
	static std::string doesNotExist(std::string p, std::string t);
	static std::string runTimeError(std::string f, std::string vt);
	static void displayErrorMessage();
};

#endif // Error.h