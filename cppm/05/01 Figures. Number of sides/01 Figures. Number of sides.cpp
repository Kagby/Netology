#include <iostream>

class Figure
{
private:
    int sides_count;
    std::string name;

public:
    Figure()
    {
        sides_count = 0;
        name = "Фигура";
    }

    Figure(int _sides_count, std::string _name)
    {
        sides_count = _sides_count;
        name = _name;
    }

    int get_sides_count()
    {
        return sides_count;
    }

    std::string get_name()
    {
        return name;
    }
};

class Triangle : public Figure
{
public:
    Triangle() : Figure(3, "Треугольник") {}
};

class Quadrangle : public Figure
{
public:
    Quadrangle() : Figure(4, "Четырёхугольник") {}
};

int main()
{
    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;

    std::cout << "Количество сторон:" << std::endl;
    std::cout << figure.get_name() << ": " << figure.get_sides_count() << std::endl;
    std::cout << triangle.get_name() << ": " << triangle.get_sides_count() << std::endl;
    std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << std::endl;

    return 0;
}