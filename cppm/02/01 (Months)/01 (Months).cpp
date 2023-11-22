#include <iostream>
#include <string>

// Перечисление
enum class Month
{
    Январь = 1,
    Февраль,
    Март,
    Апрель,
    Май,
    Июнь,
    Июль,
    Август,
    Сентябрь,
    Октябрь,
    Ноябрь,
    Декабрь
};

int main() 
{
    int number;
    do 
    {
        std::cout << "Введите номер месяца (0 для выхода): ";
        std::cin >> number;

        if (number >= 1 && number <= 12) {
            std::string month_name;

            switch (static_cast<Month>(number)) {
            case Month::Январь:   month_name = "Январь"; break;
            case Month::Февраль:  month_name = "Февраль"; break;
            case Month::Март:     month_name = "Март"; break;
            case Month::Апрель:   month_name = "Апрель"; break;
            case Month::Май:      month_name = "Май"; break;
            case Month::Июнь:     month_name = "Июнь"; break;
            case Month::Июль:     month_name = "Июль"; break;
            case Month::Август:   month_name = "Август"; break;
            case Month::Сентябрь: month_name = "Сентябрь"; break;
            case Month::Октябрь:  month_name = "Октябрь"; break;
            case Month::Ноябрь:   month_name = "Ноябрь"; break;
            case Month::Декабрь:  month_name = "Декабрь"; break;
            }

            std::cout << month_name << std::endl;
        }
        else if (number != 0) {
            std::cout << "Неправильный номер!" << std::endl;
        }
    } 
    while (number != 0);

    std::cout << "До свидания" << std::endl;

    return 0;
}