#ifndef CMATH_H
#define CMATH_H

class CMath
{
public:
	static int add(int x, int y);
	static float add(float x, float y);
	static double add(double x, double y);

	static int sub(int x, int y);
	static float sub(float x, float y);
	static double sub(double x, double y);

	static int mult(int x, int y);
	static float mult(float x, float y);
	static double mult(double x, double y);

	static int div(int x, int y);
	static float div(float x, float y);
	static double div(double x, double y);

	static float pi();
};

#endif // CMath.h