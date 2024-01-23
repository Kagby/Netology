#include <iostream>

const int MAX_N = 100; 

// Функция для вычисления числа Фибоначчи с использованием мемоизации
int fibonacci(long n, long memo[])
{
    if (n <= 1)
        return n;

    // Проверяем, было ли уже вычислено значение для n
    if (memo[n] != -1)
        return memo[n];

    // Если нет, то вычисляем и сохраняем в memo
    memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);

    return memo[n];
}

int main()
{
    long n;

    std::cout << "Введите число: ";
    std::cin >> n;

    // Инициализируем массив memo значениями (-1 не вычислено)
    long memo[MAX_N + 1];
    for (int i = 0; i <= MAX_N; ++i)
        memo[i] = -1;

    std::cout << "Число Фибоначчи: " << fibonacci(n, memo) << std::endl;

    return 0;
}