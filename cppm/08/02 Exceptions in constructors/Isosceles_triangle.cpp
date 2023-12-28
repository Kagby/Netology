#include "Isosceles_triangle.h"

Isosceles_triangle::Isosceles_triangle(int _a, int _b, int _c, int _A, int _B, int _C) : Triangle(_a, _b, _c, _A, _B, _C)
{
    set_name("Равнобедренный треугольник");

    if ((get_a() != get_c()) && (get_A() != get_C()))
    {
        throw My_exception("Стороны a и c должны быть равны, углы A и C должны быть равны", get_name());
    }
}