#include "Square.h"

Square::Square(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : Rectangle(_a, _b, _c, _d, _A, _B, _C, _D)
{
    set_name("Квадрат");

    if ((get_a() != get_b()) && (get_b() != get_c()))
    {
        throw My_exception("Все стороны должны быть равны", get_name());
    }
}