#pragma once
#include "Triangle.h"

class Equilateral_triangle :
    public Triangle
{
private:
    static const int angle;
public:
    Equilateral_triangle(int _c);
};

