#include <iostream>

class Fraction
{
private:
    int numerator_;
    int denominator_;

public:
    Fraction(int numerator, int denominator)
    {
        numerator_ = numerator;
        denominator_ = denominator;
        reduce(); // Сокращаем дробь при создании
    }

    // Оператор сложения (+)
    Fraction operator+(const Fraction& right) const
    {
        int newNumerator = (numerator_ * right.denominator_) + (right.numerator_ * denominator_);
        int newDenominator = denominator_ * right.denominator_;
        return Fraction(newNumerator, newDenominator);
    }

    // Оператор вычитания (-)
    Fraction operator-(const Fraction& right) const
    {
        int newNumerator = numerator_ * right.denominator_ - right.numerator_ * denominator_;
        int newDenominator = denominator_ * right.denominator_;
        return Fraction(newNumerator, newDenominator);
    }

    // Оператор умножения (*)
    Fraction operator*(const Fraction& right) const
    {
        int newNumerator = numerator_ * right.numerator_;
        int newDenominator = denominator_ * right.denominator_;
        return Fraction(newNumerator, newDenominator);
    }

    // Оператор деления (/)
    Fraction operator/(const Fraction& right) const
    {
        int newNumerator = numerator_ * right.denominator_;
        int newDenominator = denominator_ * right.numerator_;
        return Fraction(newNumerator, newDenominator);
    }

    // Префиксный инкремент (++f1)
    Fraction operator++()
    {
        numerator_ += denominator_;
        reduce();
        return *this;
    }
    // Постфиксный инкремент (f1++)
    Fraction operator++(int)
    {
        return ++(*this);;
    }

    // Префиксный декремент (--f1)
    Fraction operator--()
    {
        numerator_ -= denominator_;
        reduce();
        return *this;
    }
    // Постфиксный декремент (f1--)
    Fraction operator--(int)
    {
        return --(*this);;
    }

    // Сокращение дроби
    void reduce()
    {
        int gcd = findGCD(numerator_, denominator_);
        numerator_ /= gcd;
        denominator_ /= gcd;
    }

    // Наибольший общий делитель
    int findGCD(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    // Вывод дроби
    friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction)
    {
        os << fraction.numerator_ << "/" << fraction.denominator_;
        return os;
    }
};

int main()
{
    int num1, denom1, num2, denom2;

    num1 = 3;
    denom1 = 4;
    num2 = 4;
    denom2 = 5;

    //std::cout << "Введите числитель дроби 1: ";
    //std::cin >> num1;

    //std::cout << "Введите знаменатель дроби 1: ";
    //std::cin >> denom1;

    //std::cout << "Введите числитель дроби 2: ";
    //std::cin >> num2;

    //std::cout << "Введите знаменатель дроби 2: ";
    //std::cin >> denom2;

    Fraction f1(num1, denom1);
    Fraction f2(num2, denom2);

    // Сложение
    std::cout << f1 << " + " << f2 << " = " << f1 + f2 << std::endl;

    // Вычитание
    std::cout << f1 << " - " << f2 << " = " << f1 - f2 << std::endl;

    // Умножение
    std::cout << f1 << " * " << f2 << " = " << f1 * f2 << std::endl;

    // Деление
    std::cout << f1 << " / " << f2 << " = " << f1 / f2 << std::endl;

    // Префиксный инкремент
    std::cout << "++" << f1 << " * " << f2 << " = ";
    std::cout << ++f1 * f2 << std::endl; 
    std::cout << "Значение дроби 1 = " << f1 << std::endl;
    // Почему-то если записывать в одну строку:
    // std::cout << "++" << f1 << " * " << f2 << " = " << ++f1 * f2 << std::endl;
    // то адреса "f1" и "++f1" одинаковые. и на выходе мы получаем:         ++7/4 * 4/5 = 7/5
    // А если разделить строки ";" то адреса разные и результат нормальный: ++3/4 * 4/5 = 7/5

    //// Постфиксный инкремент
    //std::cout << f1 << "++" << " * " << f2 << " = ";
    //std::cout << f1++ * f2 << std::endl;
    //std::cout << "Значение дроби 1 = " << f1 << std::endl;

    //// Префиксный декремент
    //std::cout << "--" << f1 << " * " << f2 << " = ";
    //std::cout << --f1 * f2 << std::endl;
    //std::cout << "Значение дроби 1 = " << f1 << std::endl;

    //Постфиксный декремент
    std::cout << f1 << "--" << " * " << f2 << " = ";
    std::cout << f1-- * f2 << std::endl;
    std::cout << "Значение дроби 1 = " << f1 << std::endl;

    return 0;
}
