#include <iostream>

int calc(int* arr, int size)
{
    int ans = 0;
    for (int i = 1; i < size; i++)
    {
        ans += arr[i] - arr[i - 1];
    }
    return ans;
}

int main()
{
    int numbers[4]{ 1, 2, 3, 4 };
    std::cout << "ans: " << calc(numbers, 4) << std::endl;
}
