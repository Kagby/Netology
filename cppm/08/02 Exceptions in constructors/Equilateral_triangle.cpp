#include "Equilateral_triangle.h"

Equilateral_triangle::Equilateral_triangle(int _a, int _b, int _c, int _A, int _B, int _C) : Triangle(_a, _b, _c, _A, _B, _C)
{
    set_name("Равносторонний треугольник");

    if ((get_a() != get_b()) && (get_a() != get_c()) && (get_A() != get_B()) && (get_A() != get_C()))
    {
        throw My_exception("Все стороны должны быть равны", get_name());
    }
    if ((get_A() != 60) && (get_B() != 60) && (get_A() != 60))
    {
        throw My_exception("Все углы должны быть равны 60 градусов", get_name());
    }
}