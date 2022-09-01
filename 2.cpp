#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 0;
    double an = 1, eps = 0, sum = 0; // an = 1 , чтобы WHILE срабатывал на первой итерации. //
    cout << "Введите число epsilon " << endl;
    cin >> eps;
    do
    {
        an = pow(-1, n - 1) / pow(n, n);
        sum += an;
        n++;
    } while (abs(an) >= eps);
    cout << "Сумма ряда,вычисленная с заданной точностью  =  " << sum << endl;

    cin.get();

    return 0;
}