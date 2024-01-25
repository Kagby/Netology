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
	}

    // Оператор равенства (==)
    bool operator==(const Fraction& right) const
    {
        return (numerator_ * right.denominator_ == right.numerator_ * denominator_);
    }

    // Оператор неравенства (!=)
    bool operator!=(const Fraction& right) const
    {
        return !(*this == right);
    }

    // Оператор меньше (<)
    bool operator<(const Fraction& right) const
    {
        return (numerator_ * right.denominator_ < right.numerator_ * denominator_);
    }

    // Оператор больше (>)
    bool operator>(const Fraction& right) const
    {
        return (numerator_ * right.denominator_ > right.numerator_ * denominator_);
    }

    // Оператор меньше или равно (<=)
    bool operator<=(const Fraction& right) const
    {
        return (*this < right || *this == right);
    }

    // Оператор больше или равно (>=)
    bool operator>=(const Fraction& right) const
    {
        return (*this > right || *this == right);
    }
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}