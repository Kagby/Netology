#include "Rectangle.h"

const int Rectangle::angle = 90;

Rectangle::Rectangle(int _a, int _b) : Quadrangle(_a, _b, _a, _b, angle, angle, angle, angle)
{
    set_name("Прямоугольник");
}