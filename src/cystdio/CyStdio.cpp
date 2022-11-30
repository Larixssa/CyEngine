#include "CyStdio.h"

#include<string>
#include<iostream>

void CyStdio::cPut(std::string putString)
{
	if (!putString.empty())
	{
		std::cout << putString;
	}
}

void CyStdio::cPutLn(std::string putStringF)
{
	if (!putStringF.empty())
	{
		std::cout << putStringF + "\n";
	}
}

void CyStdio::cGet(std::string &iStr)
{ 
	std::getline(std::cin, iStr); 
}