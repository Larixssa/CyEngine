#ifndef PROCESSHANDLER_H
#define PROCESSHANDLER_H

#include<string>

class ProcessHandler
{
public:
	static std::string DEFAULT_PROCESS_ERROR_TYPE;
	static std::string getProcessError(std::string processErrorType);
	static std::string cancelledProcess();
	static std::string failedProcess();
	static void displayProcessError();
};

#endif // ProcessHandler.h