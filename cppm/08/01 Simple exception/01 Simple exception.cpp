#include <iostream>

int function(std::string str, int forbidden_length)
{
    if (str.length() == forbidden_length)
    {
        throw std::exception("слово запретной длины");
    }

    return 0;
}

int main()
{
    int forbidden_length = 0;
    std::string word;

    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;

    do
    {
        std::cout << "Введите слово: ";
        std::cin >> word;

        try
        {
            function(word, forbidden_length);
        }
        catch (const std::exception& bad_length)
        {
            std::cout << "Вы ввели " << bad_length.what() << "! До свидания" << std::endl;
            return false;
        }

        std::cout << "Длина слова \"" << word << "\" равна " << word.length() << std::endl;

    } while (true);
}