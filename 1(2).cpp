#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double n;
    double m = 5;
    cout << "\n Введите n ";
    cin >> n;
    cout << "\nЗначение выражения --m-++n= " << (--m - ++n);
    cout << "\nЗначение выражения m*n<n++ = " << (m * n < n++);
    cout << "\nЗначение выражения n-->m++ = " << (n-- > m++);
    cout << "\n";

        system("pause");
    return 0;
}