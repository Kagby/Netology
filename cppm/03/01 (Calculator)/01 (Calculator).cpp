#include <iostream>

class Calculator
{
    double num1, num2;

public:

    // Добавление пользовательских значений num1 и num2

    bool set_num1(double& num1)
    {
        if (num1 != 0)
        {
            this->num1 = num1;
            return true;
        }
        else
        {
            std::cout << "Неверный ввод!" << std::endl;
            return false;
        }
    }

    bool set_num2(double& num2)
    {
        if (num2 != 0)
        {
            this->num2 = num2;
            return true;
        }
        else
        {
            std::cout << "Неверный ввод!" << std::endl;
            return false;
        }
    }

    // Методы вычеслений

    double add()
    {
        return num1 + num2;
    }

    double subtract_2_1()
    {
        return num1 - num2;
    }

    double subtract_1_2()
    {
        return num2 - num1;
    }

    double multiply()
    {
        return num1 * num2;
    }

    double divide_1_2()
    {
        return num1 / num2;
    }

    double divide_2_1()
    {
        return num2 / num1;
    }
};

int main()
{
    double enter_num1 = 0;
    double enter_num2 = 0;

    Calculator calc;

    do
    {
        std::cout << "Введите num1: ";
        std::cin >> enter_num1;
    } while (!calc.set_num1(enter_num1));

    do
    {
        std::cout << "Введите num2: ";
        std::cin >> enter_num2;
    } while (!calc.set_num2(enter_num2));

    std::cout << "num1 + num2 :" << calc.add() << std::endl;
    std::cout << "num1 - num2 :" << calc.subtract_2_1() << std::endl;
    std::cout << "num2 - num1 :" << calc.subtract_1_2() << std::endl;
    std::cout << "num1 * num2 :" << calc.multiply() << std::endl;
    std::cout << "num1 / num2 :" << calc.divide_1_2() << std::endl;
    std::cout << "num2 / num1 :" << calc.divide_2_1() << std::endl;
}