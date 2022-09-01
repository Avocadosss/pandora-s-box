#include <iostream>
#include <cmath>
#define pi 3.14159265
#define e 2.718
using namespace std;

int main()
{

    double Sn = 0;     // значение суммы для заданного	n
    double Se = 0;     // значе-ние суммы для заданной точности
    double E = 0.0001; //заданная точность
    double y;          // точное значение функции
    int a = 1;         //диапазон изменения
    int b = 2;         //диапазон изменения
    int k = 10;
    int n = 15;
    double x; //значение параметра
    double h = (b - a) / k;
    float i1, i2; // переменные
    double xe;    // накапливаемый элемент для суммирования

    for (int ix = 0; ix <= k; ix++)
    {
        x = a + ix * h;
        y = pow(e, x);

        for (i1 = 1; i1 <= n; i1++)
        {
            Sn += (i1 * x) / i1;
        }

        for (i2 = 1, xe = 1; xe >= E; i2++)
        {
            xe = (i2 * x) / i2;
            Se += xe;
        }
        printf("    X=%f", x);
        printf("    SN=%f", Sn);
        printf("    SE=%f", Se);
        printf("    Y=%f\n", y);
    }

    cin.get();
    return 0;
}