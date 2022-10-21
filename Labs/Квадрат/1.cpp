#include <iostream>
using namespace std;
 
int main()
{
    int side;
 
    cout << "vvedite razmer storon kvadrata: ";
    cin >> side;
    cout << endl;
 
    for(int i = 0; i < side; i++)
    {
        for(int j = 0; j < side; j++)
        {
            if(i==0 || j==0 || i==side-1 || j==side-1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}