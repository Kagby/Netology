#include <iostream>

class Counter
{
    int value = 1;

public:

    Counter() {}

    Counter(int value)
    {
        this->value = value;
    }

    // Увеличения значения
    void increment() {
        value++;
    }

    // Уменьшение значения
    void decrement() {
        if (value > 0) {
            value--;
        }
    }

    // Текущее значение
    int get_value() const { 
        return value;
        // value = 100; // "const" не даст изменить метод
    }
};

int main() 
{
    char command;
    int initial_value = 1;
    std::string choice;

    Counter* counter = nullptr;

    do 
    {
        std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
        std::cin >> choice;

        if (choice == "yes")
        {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> initial_value;
            counter = new Counter(initial_value);
            break;
        }
        else if (choice == "no")
        {
            counter = new Counter();
            break;
        }

    } while (true);

    std::cout << std::endl;

    do 
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        switch (command) 
        {
            case '+':
                counter->increment();
                break;
            case '-':
                counter->decrement();
                break;
            case '=':
                std::cout << counter->get_value() << std::endl;
                break;
            case 'x':
                std::cout << "До свидания!" << std::endl;
                break;
            default:
                break;
        }
    } while (command != 'x');

    delete counter;
    return 0;
}