#include "Quadrangle.h"


Quadrangle::Quadrangle(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : Figure(_a, _b, _c, _d, _A, _B, _C, _D)
{
    set_name("Четырёхугольник");

    if ( (get_A() + get_B() + get_C() + get_D()) != 360 )
    {
        throw My_exception("Сумма углов не равна 360", get_name());
    }

    if (get_side_count() != 4)
    {
        throw My_exception("Количество сторон не равно 4", get_name());
    }
}

void Quadrangle::print_info()
{
    Figure::print_info();
    std::cout << "Стороны: ";
    std::cout << "a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d();
    std::cout << std::endl;

    std::cout << "Углы: ";
    std::cout << "A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D();
    std::cout << std::endl;
    std::cout << std::endl;
}