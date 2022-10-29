#include <iostream>
using namespace std;

int main()
{
	int a, min, el = 1, n = 0, b = 0;
	while (b == 0)
	{
		cout << "enter a " << endl;
		cin >> a;
		if (a == 0)
		{
			cout << "first element must be different from 0";
			n++;
		}
		else
		{
			min = a;
			while (a != 0)
			{
				cout << "enter a " << endl;
				cin >> a;
				if (a != 0 && a < min)
				{
					min = a;
					el = 0;
				}
				if (a != 0 && a == min)
					el++;
			}
			cout << "min = " << min << endl << "number of min elements = " << el << endl;
			n = 0;
		}
		if (n == 3)
		{
			cout << "stop program" << endl;
			b = 1;
		}
	}
	return 0;
}