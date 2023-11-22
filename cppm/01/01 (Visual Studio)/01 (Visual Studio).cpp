#include <iostream>
#include <fstream>

void to_arr(std::ifstream &in_file, int* arr, int &size)
{
    in_file >> size;
    for (int i = 0; i < size; i++)
    {
        in_file >> arr[i];
    }
}

void to_file(std::ofstream &out_file, int* arr, int size)
{
    out_file << size << std::endl;
    for (int i = 0; i < size; i++)
    {
        out_file << arr[i] << " ";
    }
}

void shift (int size, int* arr, bool mov)
{   
    // Сдвиг массива вправо на 1 (1 2 3 4 5 >> 5 1 2 3 4)
    if (mov)
    {
        int tmp = arr[size - 1];
        for (int i = size; i > 0; --i)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = tmp;
    }
    // Сдвиг массива влево на 1 (1 2 3 4 5 >> 2 3 4 5 1)
    else
    {
        int tmp = arr[0];
        for (int i = 1; i < size; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[size - 1] = tmp;
    }
}

int main(int argc, char** argv)
{
    std::string in_path = "in.txt";
    std::string out_path = "out.txt";

    std::ifstream in_file(in_path);
    std::ofstream out_file(out_path);

    if (!in_file.is_open() && !out_file.is_open())
    {
        std::cout << "Files not opened\n";
    }
    else
    {
        std::cout << "Files opened\n";
    }

    // Размеры массивов
    int size1 = 0;
    int size2 = 0;

    // Массивы
    int* array1 = new int[size1];
    int* array2 = new int[size1];

    to_arr(in_file, array1, size1);
    to_arr(in_file, array2, size2);

    shift(size1, array1, false);
    shift(size2, array2, true);
    
    to_file(out_file, array2, size2);
    out_file << std::endl;
    to_file(out_file, array1, size1);

    in_file.close();
    out_file.close();

    delete[] array1;
    delete[] array2;

    return 0;
}