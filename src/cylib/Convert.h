#ifndef CONVERT_H
#define CONVERT_H

#include<string>

class Convert
{
public:
	static std::string intToStr(int _nint_);
	static std::string flToStr(float _flval_);
	static std::string dbToStr(double _dbval_);
	static int strToInt(std::string _tstr_);
	static float strToFl(std::string _flstr_);
	static double strToDb(std::string _dbstr_);
};

#endif // Convert.h