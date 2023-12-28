#pragma once
#include <iostream>

class Figure
{
private:
    int a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0;
    std::string name = "Фигура";
    int side_count = side_counter();

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
    int get_side_count();
    std::string get_name();
    void set_name(std::string name);
    virtual void print_info();
    int side_counter();
};

