#include <iostream>
#include "Counter.h"

int main()
{
    char command;
    int initial_value = 1;
    std::string choice;

    Counter counter;

    while (true)
    {
        std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
        std::cin >> choice;

        if (choice == "yes")
        {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> initial_value;
            counter = Counter(initial_value);
            break;
        }
        else if (choice == "no")
        {
            break;
        }
    }

    std::cout << std::endl;

    do
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        switch (command)
        {
        case '+':
            counter.increment();
            break;
        case '-':
            counter.decrement();
            break;
        case '=':
            std::cout << counter.get_value() << std::endl;
            break;
        case 'x':
            std::cout << "До свидания!" << std::endl;
            break;
        default:
            break;
        }
    } while (command != 'x');

    return 0;
}