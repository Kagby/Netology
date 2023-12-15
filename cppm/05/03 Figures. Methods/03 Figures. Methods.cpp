#include <iostream>

class Figure
{
private:
    int a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0;
    std::string name = "Фигура";
    int side_count = side_counter();

public:
    Figure() {}
    Figure(int _a, int _b, int _c, int _A, int _B, int _C) : a(_a), b(_b), c(_c), A(_A), B(_B), C(_C) {}
    Figure(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : a(_a), b(_b), c(_c), d(_d), A(_A), B(_B), C(_C), D(_D) {}

    int get_a() { return a; }
    int get_b() { return b; }
    int get_c() { return c; }
    int get_d() { return d; }
    int get_A() { return A; }
    int get_B() { return B; }
    int get_C() { return C; }
    int get_D() { return D; }

    int get_side_count() { return side_count; }

    std::string get_name()
    {
        return name;
    }
    void set_name(std::string name)
    {
        this->name = name;
    }

    virtual void print_info()
    {
        std::cout << get_name() << ": " << std::endl;
        if (check())
        {
            std::cout << "Правильная" << std::endl;
        }
        else
        {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << "Количество сторон: " << side_count << std::endl;
    }

    // Фигура правильная?
    virtual bool check()
    {
        if (side_count == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // Cчётчик сторон
    int side_counter()
    {
        int a[4]{ get_a(), get_b(), get_c(), get_d() };
        int side_count = 0;
        for (int i = 0; i < 4; ++i)
        {
            if (a[i] > 0)
            {
                ++side_count;
            }
        }
        return side_count;
    }
};

// Треугольники
class Triangle : public Figure
{
public:
    Triangle(int _a, int _b, int _c, int _A, int _B, int _C) : Figure(_a, _b, _c, _A, _B, _C)
    {
        set_name("Треугольник");
    }

    bool check() override
    {
        if (get_side_count() == 3 && get_A() + get_B() + get_C() == 180)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void print_info() override
    {
        std::cout << std::endl;
        Figure::print_info();
        std::cout << "Стороны: ";
        std::cout << "a=" << get_a() << " b=" << get_b() << " c=" << get_c();
        std::cout << std::endl;

        std::cout << "Углы: ";
        std::cout << "A=" << get_A() << " B=" << get_B() << " C=" << get_C();
        std::cout << std::endl;
    }
};

class Right_triangle : public Triangle
{
public:
    Right_triangle(int _a, int _b, int _c, int _A, int _B, int _C) : Triangle(_a, _b, _c, _A, _B, _C)
    {
        set_name("Прямоугольный треугольник");
    }

    bool check() override
    {
        if (Triangle::check() && get_C() == 90)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class Isosceles_triangle : public Triangle
{
public:
    Isosceles_triangle(int _a, int _b, int _c, int _A, int _B, int _C) : Triangle(_a, _b, _c, _A, _B, _C)
    {
        set_name("Равнобедренный треугольник");
    }

    bool check() override
    {
        if (Triangle::check() && get_a() == get_c() && get_A() == get_C())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class Equilateral_triangle : public Triangle
{
public:
    Equilateral_triangle(int _a, int _b, int _c, int _A, int _B, int _C) : Triangle(_a, _b, _c, _A, _B, _C)
    {
        set_name("Равносторонний треугольник");
    }

    bool check() override
    {
        if (Triangle::check() && get_a() == get_b() && get_a() == get_c() && get_A() == get_B() && get_A() == get_C())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

// Четырёхугольники
class Quadrangle : public Figure
{
public:
    Quadrangle(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : Figure(_a, _b, _c, _d, _A, _B, _C, _D)
    {
        set_name("Четырёхугольник");
    }

    bool check() override
    {
        if (get_side_count() == 4 && get_A() + get_B() + get_C() + get_D() == 360)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void print_info() override
    {
        std::cout << std::endl;
        Figure::print_info();
        std::cout << "Стороны: ";
        std::cout << "a=" << get_a() << " b=" << get_b() << " c=" << get_c() << " d=" << get_d();
        std::cout << std::endl;

        std::cout << "Углы: ";
        std::cout << "A=" << get_A() << " B=" << get_B() << " C=" << get_C() << " D=" << get_D();
        std::cout << std::endl;
    }
};

class Rectangle : public Quadrangle
{

public:
    Rectangle(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : Quadrangle(_a, _b, _c, _d, _A, _B, _C, _D)
    {
        set_name("Прямоугольник");
    }

    bool check() override
    {
        if (Quadrangle::check() && get_a() == get_c() && get_b() == get_d() && get_A() == 90 && get_B() == 90 && get_C() == 90 && get_D() == 90)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class Square : public Rectangle
{
public:
    Square(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : Rectangle(_a, _b, _c, _d, _A, _B, _C, _D)
    {
        set_name("Квадрат");
    }

    bool check() override
    {
        if (Rectangle::check() && get_a() == get_b())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : Quadrangle(_a, _b, _c, _d, _A, _B, _C, _D)
    {
        set_name("Параллелограмм");
    }

    bool check() override
    {
        if (Quadrangle::check() && get_a() == get_c() && get_b() == get_d() && get_A() == get_C() && get_B() == get_D())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class Rhombus : public Quadrangle
{
public:
    Rhombus(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : Quadrangle(_a, _b, _c, _d, _A, _B, _C, _D)
    {
        set_name("Ромб");
    }

    bool check() override
    {
        if (Quadrangle::check() && get_a() == get_b() && get_b() == get_c() && get_c() == get_d() && get_A() == get_C() && get_B() == get_D())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Figure figure;
    figure.print_info();

    Triangle triangle(10, 20, 30, 50, 60, 70);
    triangle.print_info();

    Right_triangle right_triangle(10, 20, 30, 50, 60, 90);
    right_triangle.print_info();

    Right_triangle right_triangle2(10, 20, 30, 50, 40, 90);
    right_triangle2.print_info();

    Isosceles_triangle isosceles_triangle(10, 20, 10, 50, 60, 50);
    isosceles_triangle.print_info();

    Equilateral_triangle equilateral_triangle(30, 30, 30, 60, 60, 60);
    equilateral_triangle.print_info();

    // четырёхи
    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    quadrangle.print_info();

    Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
    rectangle.print_info();

    Square square(20, 20, 20, 20, 90, 90, 90, 90);
    square.print_info();

    Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40);
    parallelogram.print_info();

    Rhombus rhombus(30, 30, 30, 30, 30, 40, 30, 40);
    rhombus.print_info();

    return 0;
}