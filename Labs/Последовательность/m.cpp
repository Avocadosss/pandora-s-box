#include <iostream>
using namespace std;

int main()
{
    int a, min, n = 0, b = 0;
    while (1 && b == 0)
    {
        cout << "enter a" << endl;
        cin >> a;
        if (a == 0)
        {
            cout << "element must be different from 0"<<endl;
            n++;
        }
        else
        {
            min = a;
            while (a != 0)
            {
                cout << "enter a" << endl;
                cin >> a;
                if (a != 0 && a < min)

                    min = a;
            }
            cout << "min =" << min;
            n = 0;
        }
        if (n == 3)
        {
            cout << ",stop program";
            b = 1;
        }
    }
    return 0;
}