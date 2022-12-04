#include "CFormula.h"
#include "cylib/StringUtils.h"
#include "cystdio/CyBits.h"
#include "cystdio/CyStdio.h"
#include "CMath.h"
#include "CMathUtils.h"

#include<string>
#include<iomanip>
#include<iostream>

std::string CFormula::DEFAULT_OPERATION = "add";
double CFormula::NUMBER_A = 0;
double CFormula::NUMBER_B = 0;
float CFormula::FNUMBER_A = 0;
float CFormula::FNUMBER_B = 0;


// CREATE POINTS
std::string CFormula::createFormula(double na, double nb, std::string operation)
{
	double res;
	std::string operationCh;
	std::string fFormulaString;
	if (!operation.empty())
	{
		if (StringUtils::strCompare(operation, "add")) {
			res = CMath::add(na, nb); operationCh = "+";
		} else if (StringUtils::strCompare(operation, "sub")) {
			res = CMath::sub(na, nb); operationCh = "-";
		} else if (StringUtils::strCompare(operation, "mult")) {
			res = CMath::mult(na, nb); operationCh = "*";
		} else if (StringUtils::strCompare(operation, "div")) {
			res = CMath::div(na, nb); operationCh = "/";
		}

		fFormulaString = CMathUtils::getDecimal(na) + " "
						+ operationCh + " "
						+ CMathUtils::getDecimal(nb)
						+ " = " + CMathUtils::getDecimal(res);
	}
	return fFormulaString;
}

std::string CFormula::createFormula(float na, float nb, std::string operation)
{
	float res;
	std::string operationCh;
	std::string fFormulaString;
	if (!operation.empty())
	{
		if (StringUtils::strCompare(operation, "add")) {
			res = CMath::add(na, nb); operationCh = "+";
		} else if (StringUtils::strCompare(operation, "sub")) {
			res = CMath::sub(na, nb); operationCh = "-";
		} else if (StringUtils::strCompare(operation, "mult")) {
			res = CMath::mult(na, nb); operationCh = "*";
		} else if (StringUtils::strCompare(operation, "div")) {
			res = CMath::div(na, nb); operationCh = "/";
		}

		fFormulaString = CMathUtils::getDecimal(na) + " "
			+ operationCh + " "
			+ CMathUtils::getDecimal(nb)
			+ " = " + CMathUtils::getDecimal(res);
	}
	return fFormulaString;
}


// DISPLAY FORMULA
void CFormula::displayFormula()
{
	CyStdio::cPut(
		CFormula::createFormula(
			CFormula::NUMBER_A,
			CFormula::NUMBER_B,
			CFormula::DEFAULT_OPERATION
		)
		+ CyBits::repeatString("\n", 2)
	);
}