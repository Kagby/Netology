#include "Equilateral_triangle.h"

const int Equilateral_triangle::angle = 60;

Equilateral_triangle::Equilateral_triangle(int _c) : Triangle(_c, _c, _c, angle, angle, angle)
{
    set_name("Равносторонний треугольник");
}