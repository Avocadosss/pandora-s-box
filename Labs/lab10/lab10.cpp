#include <iostream>
#include <Windows.h>
using namespace std;

void FillArray(int *const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void ShowArray(const int *const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void AddArray(int *&arr1, int &size, const int m)
{
    int *newArray = new int[size + m];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr1[i];
    }
    for (int i = size; i < size + m; i++)
    {
        newArray[i] = rand() % 10;
    }
    size += m;
    delete[] arr1;
    arr1 = newArray;
}

void CleanArray(int *&arr1, int &size, const int k)
{
    size = k;
    int *newArray = new int[size];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr1[i];
    }
    delete[] arr1;
    arr1 = newArray;
}
int main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    int size, m, k;
    cout << "¬ведите размер массива:";
    cin >> size;
    int *arr1 = new int[size];

    FillArray(arr1, size);

    ShowArray(arr1, size);

    cout << "¬ведите с какого номера удалить элементы:";
    cin >> k;
    CleanArray(arr1, size, k);
    ShowArray(arr1, size);

    cout << "¬ведите сколько элементов добавить:";
    cin >> m;

    AddArray(arr1, size, m);

    ShowArray(arr1, size);

    delete[] arr1;
    system("pause");
    return 0;
}