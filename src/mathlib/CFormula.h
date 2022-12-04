#ifndef CFORMULA_H
#define CFORMULA_H

#include<string>

class CFormula
{
public:
	static std::string DEFAULT_OPERATION;
	static double NUMBER_A;
	static double NUMBER_B;
	static float FNUMBER_A;
	static float FNUMBER_B;
	static std::string createFormula(double na, double nb, std::string operation);
	static std::string createFormula(float na, float nb, std::string operation);
	static void displayFormula();
};

#endif // CFormula.h