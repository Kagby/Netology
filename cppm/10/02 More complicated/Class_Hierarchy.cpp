#include <iostream>

#include "Figure.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

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
