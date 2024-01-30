#include "Triangle.h"

Triangle::Triangle(int _a, int _b, int _c, int _A, int _B, int _C) : Figure(_a, _b, _c, _A, _B, _C)
{
    Figure::set_name("Треугольник");
}