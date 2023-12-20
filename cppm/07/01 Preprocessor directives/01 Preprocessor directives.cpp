#include <iostream>

#define MODE 1

// Проверка определения константы
#ifdef MODE
    #if MODE == 0
        #define TRAINING_MODE
    #elif MODE == 1
        #define BATTLE_MODE
    #else
        #define UNKNOWN_MODE
    #endif
#else
        #error "Необходимо определить MODE"
#endif

#ifdef BATTLE_MODE
    int add(int a, int b)
    {
        return a + b;
    }
#endif

int main()
{
    #ifdef TRAINING_MODE
        std::cout << "Работаю в режиме тренировки" << std::endl;

    #elif defined(BATTLE_MODE)
        std::cout << "Работаю в боевом режиме" << std::endl;

        int num1, num2;
        std::cout << "Введите число 1: ";
        std::cin >> num1;
        std::cout << "Введите число 2: ";
        std::cin >> num2;
        std::cout << "Результат сложения: " << add(num1, num2) << std::endl;


    #elif defined(UNKNOWN_MODE)
        std::cout << "Неизвестный режим. Завершение работы" << std::endl;

    #endif

        return 0;
}