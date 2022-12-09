#include "ProcessHandler.h"
#include "cylib/StringUtils.h"
#include "cystdio/CyStdio.h"

#include<string>

std::string ProcessHandler::DEFAULT_PROCESS_ERROR_TYPE = "cancelled";

std::string ProcessHandler::getProcessError(std::string processErrorType)
{
	std::string fProcessError;

	if (!processErrorType.empty())
	{
		if (StringUtils::strCompare(processErrorType, "cancelled")) {
			fProcessError = ProcessHandler::cancelledProcess();
		} else if (StringUtils::strCompare(processErrorType, "failed")) {
			fProcessError = ProcessHandler::failedProcess();
		}
	}
	else
	{
		fProcessError = ProcessHandler::failedProcess();
	}

	return fProcessError;
}

std::string ProcessHandler::cancelledProcess()
{
	return "-- PROCESS CANCELLED --";
}

std::string ProcessHandler::failedProcess()
{
	return "-- PROCESS FAILED --";
}

void ProcessHandler::displayProcessError()
{
	CyStdio::cPut(ProcessHandler::getProcessError(ProcessHandler::DEFAULT_PROCESS_ERROR_TYPE));
}