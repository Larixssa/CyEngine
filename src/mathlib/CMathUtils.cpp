#include "CMathUtils.h"
#include "cylib/Convert.h"

// isPositive()
bool CMathUtils::isPositive(int n)
{
	return ((n >= 0) ? true : false);
}

bool CMathUtils::isPositive(float n)
{
	return ((n >= 0) ? true : false);
}

bool CMathUtils::isPositive(double n)
{
	return ((n >= 0) ? true : false);
}



// isNegative()
bool CMathUtils::isNegative(int n)
{
	return ((n < 0) ? true : false);
}

bool CMathUtils::isNegative(float n)
{
	return ((n < 0) ? true : false);
}

bool CMathUtils::isNegative(double n)
{
	return ((n < 0) ? true : false);
}

// getDecimal()
std::string CMathUtils::getDecimal(float n)
{
	return Convert::flToStr(n).replace(4, 5, "");
}

std::string CMathUtils::getDecimal(double n)
{
	return Convert::dbToStr(n).replace(4, 5, "");
}