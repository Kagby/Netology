#pragma once
#include "Triangle.h"

class Right_triangle :
    public Triangle
{
private:
    static const int angle;
public:
    Right_triangle(int _a, int _b, int _c, int _A, int _B);
};

