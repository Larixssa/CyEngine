#ifndef CMATHUTILS_H
#define CMATHUTILS_H

#include<string>

class CMathUtils
{
public:
	// isPositive()
	static bool isPositive(int n);
	static bool isPositive(float n);
	static bool isPositive(double n);

	// isNegative()
	static bool isNegative(int n);
	static bool isNegative(float n);
	static bool isNegative(double n);

	// getDecimal()
	static std::string getDecimal(float n);
	static std::string getDecimal(double n);
};

#endif // CMathUtils.h