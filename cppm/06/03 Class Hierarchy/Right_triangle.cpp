#include "Right_triangle.h"

const int Right_triangle::angle = 90;

Right_triangle::Right_triangle(int _a, int _b, int _c, int _A, int _B) : Triangle(_a, _b, _c, _A, _B, angle)
{
    Figure::set_name("Прямоугольный треугольник");
}