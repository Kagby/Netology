#pragma once
#include "Figure.h"
#include "My_exception.h"

class Triangle : public Figure
{
public:
    Triangle(int _a, int _b, int _c, int _A, int _B, int _C);
    void print_info() override;
};