#include <iostream>
#include <fstream>
#include <string>

class Address
{
private:
    std::string city;
    std::string street;
    int house;
    int apartment;

public:

    Address(const std::string& city, const std::string& street, int house, int apartment)
        : city(city), street(street), house(house), apartment(apartment)
    {
    }

    // Метод для получения строки для вывода в файл
    std::string get_output_address() const
    {
        return city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(apartment);
    }
};

int main()
{
    std::ifstream input_file("in.txt");
    std::ofstream output_file("out.txt");

    if (!input_file.is_open() || !output_file.is_open())
    {
        std::cerr << "Error opening files." << std::endl;
        return 1;
    }

    // Первая строка файла - количество адресов
    int num_addresses;
    input_file >> num_addresses;

    // Создаём двумерный массив из класса
    Address** addresses = new Address * [num_addresses];

    // Считывание адресов из файла
    for (int i = 0; i < num_addresses; ++i)
    {
        std::string city, street;
        int house_number, apartment_number;

        // Запись адресов из файла сначала в переменные
        input_file >> city >> street >> house_number >> apartment_number;
        // Запись из переменных в класс
        addresses[i] = new Address(city, street, house_number, apartment_number);
    }

    // Запись количества адресов в файл
    output_file << num_addresses << std::endl;

    // Запись адресов в обратном порядке в файл
    for (int i = num_addresses - 1; i >= 0; --i)
    {
        output_file << addresses[i]->get_output_address();

        // Проверка последней строки
        if (!i == 0)
        {
            output_file << std::endl;
        }
    }

    // Освобождение памяти
    for (int i = 0; i < num_addresses; ++i)
    {
        delete addresses[i];
    }
    delete[] addresses;

    input_file.close();
    output_file.close();

    return 0;
}