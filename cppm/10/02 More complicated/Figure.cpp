#include "Figure.h"

Figure::Figure() {};
Figure::Figure(int _a, int _b, int _c, int _A, int _B, int _C) : a(_a), b(_b), c(_c), A(_A), B(_B), C(_C) {};
Figure::Figure(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : a(_a), b(_b), c(_c), d(_d), A(_A), B(_B), C(_C), D(_D) {};


int Figure::get_a() { return a; }
int Figure::get_b() { return b; }
int Figure::get_c() { return c; }
int Figure::get_d() { return d; }
int Figure::get_A() { return A; }
int Figure::get_B() { return B; }
int Figure::get_C() { return C; }
int Figure::get_D() { return D; }

std::string Figure::get_name()
{
    return name;
}

void Figure::set_name(std::string name)
{
    this->name = name;
}