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

    // Cтрока для вывода в файл
    std::string get_output_address() const
    {
        return city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(apartment);
    }

    // Возвращает первую букву города
    char get_char_number()
    {
        return this->city[0];
    }
};

// Сортировка адресов по названию города
void sortng(Address** addresses, int size)
{
    int size_min = size - 1;

    for (int j = 0; j < size_min; j++)
    {
        for (int i = 0; i < size_min; i++)
        {
            if (addresses[i]->get_char_number() > addresses[i + 1]->get_char_number())
            {
                addresses[size] = addresses[i];
                addresses[i] = addresses[i + 1];
                addresses[i + 1] = addresses[size];
            }
        }
    }
}

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

    // Создаём двумерный массив из класса + tmp для сортировки
    Address** addresses = new Address * [num_addresses + 1];

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

    // Сортировка
    sortng(addresses, num_addresses);

    // Запись адресов в файл
    int size_min = num_addresses - 1;
    for (int i = 0; i < num_addresses; ++i)
    {
        output_file << addresses[i]->get_output_address();

        // Проверка последней строки
        if (i < size_min)
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