#include "Header.h"

int sum(int a, int b)
{
	int sum = a + b;
	return sum;
}

int diff(int a, int b)
{
	int diff = a - b;
	return diff;
}

int multiplication(int a, int b)
{
	int multiplication = a * b;
	return multiplication;
}

double division(double a, double b)
{
	if (b != 0)
	{
		double division = a / b;
		return division;
	}
	else
	{
		std::cout << "На ноль не делим" << std::endl;
		return 0;
	}
}

double exponent(int a, int b)
{
	int exp = a;
	int pow = b - 1;
	for (int i = 0; i < pow; i++)
	{
		a *= exp;
	}
	return a;
}