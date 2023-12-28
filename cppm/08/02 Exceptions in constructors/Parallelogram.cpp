#include "Parallelogram.h"

Parallelogram::Parallelogram(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : Quadrangle(_a, _b, _c, _d, _A, _B, _C, _D)
{
    set_name("Параллелограмм");

    if ((get_A() != get_C()) && (get_B() != get_D()))
    {
        throw My_exception("Углы A,C и B,D должны быть попарно равны", get_name());
    }
}