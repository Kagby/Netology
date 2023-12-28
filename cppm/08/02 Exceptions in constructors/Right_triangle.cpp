#include "Right_triangle.h"

Right_triangle::Right_triangle(int _a, int _b, int _c, int _A, int _B, int _C) : Triangle(_a, _b, _c, _A, _B, _C)
{
    set_name("Прямоугольный треугольник");

    if (get_C() != 90)
    {
        throw My_exception("Угол C не равен 90 градусов", get_name());
    }
}