#include <iostream>
#include <iomanip>
#include "Header.h"

int main(int argc, char** argv)
{
	int a = 0, b = 0, c = 0;

	std::cout << "Введите первое число: ";
	std::cin >> std::setw(20) >> a;
	std::cout << "Введите второе число: ";
	std::cin >> std::setw(20) >> b;
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> std::setw(20) >> c;
	
	switch (c)
	{
	case 1:
		std::cout << a << " + " << b << " = " << sum(a, b) << std::endl;
		break;
	case 2:
		std::cout << a << " - " << b << " = " << diff(a, b) << std::endl;
		break;
	case 3:
		std::cout << a << " * " << b << " = " << multiplication(a, b) << std::endl;
		break;
	case 4:
		std::cout << a << " / " << b << " = " << division(a, b) << std::endl;
		break;
	case 5:
		std::cout << a << " ^ " << b << " = " << exponent(a, b) << std::endl;
		break;


	default:
		std::cout << "x is undefined" << "\n";
		break;
	}

	return 0;
}

