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
#include "My_exception.h"

int main()
{
    try
    {
        Figure figure;
        figure.print_info();
    }
    catch (std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }

    try
    {
        Triangle triangle(10, 20, 30, 50, 60, 70);
        triangle.print_info();
    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }

    try
    {
        Right_triangle right_triangle(10, 20, 30, 40, 50, 60);
        right_triangle.print_info();
    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }

    try
    {
        Right_triangle right_triangle(10, 20, 30, 40, 60, 80);
        right_triangle.print_info();
    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }

    try
    {
        Isosceles_triangle isosceles_triangle(10, 20, 10, 50, 60, 50);
        isosceles_triangle.print_info();
    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }

    try
    {
        Equilateral_triangle equilateral_triangle(30, 30, 30, 60, 60, 60);
        equilateral_triangle.print_info();
    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }

    try
    {
        Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
        quadrangle.print_info();
    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }

    try
    {
        Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
        rectangle.print_info();
    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }

    try
    {
        Square square(20, 20, 20, 20, 90, 90, 90, 90);
        square.print_info();
    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }

    try
    {
        Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40);
        parallelogram.print_info();
    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }

    try
    {
        Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40);
        parallelogram.print_info();
    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }

    try
    {
        Rhombus rhombus(30, 30, 30, 30, 30, 40, 30, 40);
        rhombus.print_info();
    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }

    return 0;
}