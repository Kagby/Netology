#pragma once
#include "Figure.h"
#include "My_exception.h"

class Quadrangle : public Figure
{
public:
    Quadrangle(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D);
    void print_info() override;
};