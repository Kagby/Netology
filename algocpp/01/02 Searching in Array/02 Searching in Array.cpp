#include <iostream>

int counter(int* arr, int size, int target)
{
    int left = 0;
    int right = size;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] <= target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }

    return size - left;
}

int main()
{
    int arr[] = { 14, 16, 19, 32, 32, 32, 56, 69, 72 };
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Введите точку отсчёта: ";
    int referencePoint;
    std::cin >> referencePoint;

    int result = counter(arr, size, referencePoint);

    std::cout << "Количество элементов в массиве больших, чем " << referencePoint << ": " << result << std::endl;

    return 0;
}