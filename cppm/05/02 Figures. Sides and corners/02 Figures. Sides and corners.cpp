#include <iostream>

class Figure
{
private:
    int a, b, c, d, A, B, C, D;
    std::string name;

public:
    Figure() = default;
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

    std::string get_name()
    {
        return name;
    }

    void set_name(std::string name)
    {
        this->name = name;
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
};

class Right_triangle : public Triangle
{
private:
    static const int angle = 90;
public:
    Right_triangle(int _a, int _b, int _c, int _A, int _B) : Triangle(_a, _b, _c, _A, _B, angle)
    {
        set_name("Прямоугольный треугольник");
    }
};

class Isosceles_triangle : public Triangle
{
public:
    Isosceles_triangle(int _a, int _b, int _A, int _B) : Triangle(_a, _b, _a, _A, _B, _A)
    {
        set_name("Равнобедренный треугольник");
    }
};

class Equilateral_triangle : public Triangle
{
private:
    static const int angle = 60;
public:
    Equilateral_triangle(int _c) : Triangle(_c, _c, _c, angle, angle, angle)
    {
        set_name("Равносторонний треугольник");
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
};

class Rectangle : public Quadrangle
{
private:
    static const int angle = 90;
public:
    Rectangle(int _a, int _b) : Quadrangle(_a, _b, _a, _b, angle, angle, angle, angle)
    {
        set_name("Прямоугольник");
    }
};

class Square : public Rectangle
{
public:
    Square(int _b) : Rectangle(_b, _b)
    {
        set_name("Квадрат");
    }
};

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int _a, int _b, int _A, int _B) : Quadrangle(_a, _b, _a, _b, _A, _B, _A, _B)
    {
        set_name("Параллелограмм");
    }
};

class Rhombus : public Quadrangle
{
public:
    Rhombus(int _a, int _A, int _B) : Quadrangle(_a, _a, _a, _a, _A, _B, _A, _B)
    {
        set_name("Ромб");
    }
};

void print_info(Figure& figure)
{
    std::cout << figure.get_name() << ": " << std::endl;

    std::cout << "Стороны: ";
    std::cout << "a=" << figure.get_a() << " b=" << figure.get_b() << " c=" << figure.get_c();
    if (figure.get_d() > 0) { std::cout << " d=" << figure.get_d(); }
    std::cout << std::endl;

    std::cout << "Углы: ";
    std::cout << "A=" << figure.get_A() << " B=" << figure.get_B() << " C=" << figure.get_C();
    if (figure.get_D() > 0) { std::cout << " D=" << figure.get_D(); }
    std::cout << std::endl << std::endl;
}

int main()
{
    // Треугольники
    Triangle triangle(10, 20, 30, 50, 60, 70);
    print_info(triangle);

    Right_triangle right_triangle(10, 20, 30, 50, 60);
    print_info(right_triangle);

    Isosceles_triangle isosceles_triangle(10, 20, 50, 60);
    print_info(isosceles_triangle);

    Equilateral_triangle equilateral_triangle(30);
    print_info(equilateral_triangle);

    // Четырёхугольники
    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    print_info(quadrangle);

    Rectangle rectangle(10, 20);
    print_info(rectangle);

    Square square(20);
    print_info(square);

    Parallelogram parallelogram(20, 30, 30, 40);
    print_info(parallelogram);

    Rhombus rhombus(30, 30, 40);
    print_info(rhombus);

    return 0;
}
