#include <iostream>
#include <string>

// Структура для хранения адреса
struct Address 
{
    std::string city;
    std::string street;
    int houseNumber;
    int apartmentNumber;
    std::string postalCode;
};

// Вывод структуры на консоль
void printAddress(const Address& addr) 
{
    std::cout << "Город: " << addr.city << std::endl;
    std::cout << "Улица: " << addr.street << std::endl;
    std::cout << "Номер дома: " << addr.houseNumber << std::endl;
    std::cout << "Номер квартиры: " << addr.apartmentNumber << std::endl;
    std::cout << "Индекс: " << addr.postalCode << std::endl;
}

int main() 
{
    // Экземпляры структуры
    Address address1 = { "Москва", "Арбат", 12, 8, "123456" };
    Address address2 = { "Ижевск", "Пушкина", 59, 143, "953769" };

    std::cout << "Адрес 1:" << std::endl;
    printAddress(address1);

    std::cout << std::endl;

    std::cout << "Адрес 2:" << std::endl;
    printAddress(address2);

    return 0;
}