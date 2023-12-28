#include "Rectangle.h"

Rectangle::Rectangle(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : Quadrangle(_a, _b, _c, _d, _A, _B, _C, _D)
{
    set_name("Прямоугольник");

    if ( (get_a() != get_c()) && (get_b() != get_d()) )
    {
        throw My_exception("Стороны a,c и b,d должны быть попарно равны", get_name());
    }

    if ((get_A() != 90) && (get_B() != 90) && (get_C() != 90) && (get_D() != 90))
    {
        throw My_exception("Все углы должны быть равны 90", get_name());
    }
}