#pragma once
#include "Quadrangle.h"
#include "My_exception.h"

class Rectangle : public Quadrangle
{
public:
    Rectangle(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D);
};

