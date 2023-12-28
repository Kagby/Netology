#include "Rhombus.h"


Rhombus::Rhombus(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : Quadrangle(_a, _b, _c, _d, _A, _B, _C, _D)
{
    set_name("Ромб");

    if ((get_a() != get_b()) && (get_b() != get_c()) && (get_c() != get_d()))
    {
        throw My_exception("Все стороны должны быть равны", get_name());
    }

    if ((get_A() != get_C()) && (get_B() != get_D()))
    {
        throw My_exception("Углы A,C и B,D должны быть попарно равны", get_name());
    }
}