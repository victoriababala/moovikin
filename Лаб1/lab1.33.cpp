#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double a, b, x;
	cout << "Введіть значення a: ";
	cin >> a;
	cout << "Введіть значення b: ";
	cin >> b;
	cout << "Введіть значення x: ";
	cin >> x;
	if (x >= 0 && x < 5)
	{
		cout << "Роз'язок лог. залежності: " << sin(3 * x) << endl;
	}

	if (x == 5)
	{
		cout << "Роз'язок лог. залежності:" << 2 * exp(a * x - 1) + 1 << endl;
	}
	if (x > 5 && x <= 12)
	{
		if ((b * x - a) == 0)
		{
			cout << " Розв'язку немає " << endl;
		}
		else {
			cout << "Роз'язок лог. залежності: " << pow((b * x - a), -1) << endl;
		}
	}
	
	if (x < 0 || x > 12 )
	{
		cout << " Розв'язку немає " << endl;
	}
	system("pause");
	return 0;
}
