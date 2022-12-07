#include "CyBits.h"

#include<string>
#include<iostream>

void CyBits::ncNewLn()
{
	std::cout << "\n";
}

std::string CyBits::gcNewLn()
{
	return "\n";
}

std::string CyBits::gcTab()
{
	return "\t";
}

std::string CyBits::gcSpace()
{
	return " ";
}

std::string CyBits::backSpace(int times)
{
	return CyBits::repeatString("\b", times);
}

std::string CyBits::repeatString(std::string str, int length)
{
	int MAX_LENGTH = 100; 
	
	std::string NEW_STRING;

	if (length >= 100) { 
		length = MAX_LENGTH; 
	}

	for (int i = 0; i < length; i++) {
		NEW_STRING += str;
	}

	return NEW_STRING;
}