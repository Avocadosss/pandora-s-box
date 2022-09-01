#include <iostream>
#include <stdlib.h>

using namespace std; //!= это неравенство

int main()
{
    srand(time(NULL));
    int i;
    int mas[100];
    for (i = 0; i < 100; i++)
        mas[i] = rand() % 10; //заполняем случайными числами
    for (i = 0; i < 100; i++)
        cout << mas[i] << "\t"; //выводим
    for (i = 0; i < 100; i++)   //выводим по заданию
    {
        if (mas[i] % 7 != 0)
            cout << mas[i] << "\t"; //если НЕ кратно семи то выводим
        if (mas[i] % 2 == 0)
            cout << "0"
                 << "\t"; //если кратно двум выводим ещё ноль
    }
    system("pause"); //пауза
    return 0;
}