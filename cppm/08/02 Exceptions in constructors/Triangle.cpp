#include "Triangle.h"

Triangle::Triangle(int _a, int _b, int _c, int _A, int _B, int _C) : Figure(_a, _b, _c, _A, _B, _C)
{
    set_name("Треугольник");

    if (get_A() + get_B() + get_C() != 180)
    {
        throw My_exception("Сумма углов не равна 180 градусов", get_name());
    }

    if (get_side_count() != 3) // Правда мы так и не получим это условие - конструктор не даст создать фигуру с другим количеством сторон
    {
        throw std::exception("Количество сторон не равно 3");
    }
}

void Triangle::print_info()
{
    Figure::print_info();
    std::cout << "Стороны: ";
    std::cout << "a=" << get_a() << " b=" << get_b() << " c=" << get_c();
    std::cout << std::endl;

    std::cout << "Углы: ";
    std::cout << "A=" << get_A() << " B=" << get_B() << " C=" << get_C();
    std::cout << std::endl;
    std::cout << std::endl;
}