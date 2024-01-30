#include <iostream>

void merge(int* arr, int left, int middle, int right)
{
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Создаем временные массивы
    int* L = new int[n1];
    int* R = new int[n2];

    // Копируем данные во временные массивы L[] и R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    // Слияние временных массивов обратно в основной массив arr[]
    int i = 0; // Индекс первого подмассива
    int j = 0; // Индекс второго подмассива
    int k = left; // Индекс сливаемого массива

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Копирование оставшихся элементов L[], если они есть
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Копирование оставшихся элементов R[], если они есть
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Освобождаем выделенную память
    delete[] L;
    delete[] R;
}

void merge_sort(int* arr, int left, int right)
{
    if (left < right)
    {
        // Находим среднюю точку
        int middle = left + (right - left) / 2;

        // Рекурсивно сортируем две половины
        merge_sort(arr, left, middle);
        merge_sort(arr, middle + 1, right);

        // Объединяем отсортированные половины
        merge(arr, left, middle, right);
    }
}

int main()
{
    // Тестирование функции сортировки слиянием

    int arr1[] = { 3, 43, 38, 29, 18, 72, 57, 61, 2, 33 };
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = { 88, 91, 87, 59, 53, 49, 29, 16, 4, 27, 28, 89, 2, 25, 74 };
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[] = { 24, 66, 20, 79, 30, 16, 19, 62, 94, 59, 0, 7, 59, 90, 84, 60, 95, 62 };
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    // Вывод исходных массивов
    std::cout << "Исходный массив 1: ";
    for (int i = 0; i < size1; i++)
        std::cout << arr1[i] << " ";
    std::cout << std::endl;

    std::cout << "Исходный массив 2: ";
    for (int i = 0; i < size2; i++)
        std::cout << arr2[i] << " ";
    std::cout << std::endl;

    std::cout << "Исходный массив 3: ";
    for (int i = 0; i < size3; i++)
        std::cout << arr3[i] << " ";
    std::cout << std::endl;

    // Сортировка массивов
    merge_sort(arr1, 0, size1 - 1);
    merge_sort(arr2, 0, size2 - 1);
    merge_sort(arr3, 0, size3 - 1);

    // Вывод отсортированных массивов
    std::cout << "Отсортированный массив 1: ";
    for (int i = 0; i < size1; i++)
        std::cout << arr1[i] << " ";
    std::cout << std::endl;

    std::cout << "Отсортированный массив 2: ";
    for (int i = 0; i < size2; i++)
        std::cout << arr2[i] << " ";
    std::cout << std::endl;

    std::cout << "Отсортированный массив 3: ";
    for (int i = 0; i < size3; i++)
        std::cout << arr3[i] << " ";
    std::cout << std::endl;

    return 0;
}
