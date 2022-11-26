#include "Convert.h"

#include<string>

std::string Convert::intToStr(int _nint_)
{
	return std::to_string(_nint_);
}

std::string Convert::flToStr(float _flval_)
{
	return std::to_string(_flval_);
}

std::string Convert::dbToStr(double _dbval_)
{
	return std::to_string(_dbval_);
}

int Convert::strToInt(std::string _tstr_)
{
	int cInt;
	for (int i = 0; i < _tstr_.length(); i++) {
		cInt = static_cast<int>(_tstr_[i]);
	} return cInt;
}

float Convert::strToFl(std::string _flstr_)
{
	int cFloat;
	for (int i = 0; i < _flstr_.length(); i++) {
		cFloat = static_cast<float>(_flstr_[i]);
	} return cFloat;
}

double Convert::strToDb(std::string _dbstr_)
{
	int cDouble;
	for (int i = 0; i < _dbstr_.length(); i++) {
		cDouble = static_cast<double>(_dbstr_[i]);
	} return cDouble;
}