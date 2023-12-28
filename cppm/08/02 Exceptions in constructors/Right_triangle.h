#pragma once
#include "Triangle.h"
#include "My_exception.h"

class Right_triangle : public Triangle
{
public:
    Right_triangle(int _a, int _b, int _c, int _A, int _B, int _C);
};