#include <iostream>
#include <string>

// Структура для хранения информации о банковском счёте
struct BankAccount {
    int accountNumber;
    std::string ownerName;
    double balance;
};

// Изменение баланса счёта
void changeBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main() {

    // Экземпляр структуры BankAccount
    BankAccount account;

    std::cout << "Введите номер счёта: ";
    std::cin >> account.accountNumber;

    std::cout << "Введите имя владельца: ";
    std::cin >> account.ownerName;

    std::cout << "Введите баланс: ";
    std::cin >> account.balance;

    // Запрашиваем новый баланс
    double newBalance;
    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;

    changeBalance(account, newBalance);

    std::cout << "Ваш счёт: " << account.ownerName << ", " << account.accountNumber << ", " << account.balance << std::endl;

    return 0;
}
