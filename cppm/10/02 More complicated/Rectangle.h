#pragma once
#include "Quadrangle.h"

class Rectangle :
    public Quadrangle
{
private:
    static const int angle;
public:
    Rectangle(int _a, int _b);
};

