#include "Parallelogram.h"

Parallelogram::Parallelogram(int _a, int _b, int _A, int _B) : Quadrangle(_a, _b, _a, _b, _A, _B, _A, _B)
{
    set_name("Параллелограмм");
}