#include "Isosceles_triangle.h"

Isosceles_triangle::Isosceles_triangle(int _a, int _b, int _A, int _B) : Triangle(_a, _b, _a, _A, _B, _A)
{
    set_name("Равнобедренный треугольник");
}