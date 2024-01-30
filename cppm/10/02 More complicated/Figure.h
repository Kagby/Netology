#pragma once
#include <iostream>

class Figure
{
private:
    int a, b, c, d, A, B, C, D;
    std::string name;

public:
    Figure();
    Figure(int _a, int _b, int _c, int _A, int _B, int _C);
    Figure(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D);

    int get_a();
    int get_b();
    int get_c();
    int get_d();
    int get_A();
    int get_B();
    int get_C();
    int get_D();

    std::string get_name();

    void set_name(std::string name);
};

