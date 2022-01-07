

#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;

void convertToTernary(int N)
{
	
	if (N == 0)
		return;

	
	int x = N % 3;
	N /= 3;
	if (x < 0)
		N += 1;

	convertToTernary(N);


	if (x < 0)
		cout << x + (3 * -1);
	else
		cout << x;
}

void convert(int Decimal)
{
	if (Decimal != 0) {
		convertToTernary(Decimal);
		cout << " ";
	}
	else
		cout << "0" << " ";
}


int main()
{
	int number;
	cout << "Enter the number  " << endl;
    cin >> number;
	cout << "Ternary form" << endl;
	for (int i = 0; i < number + 1; i++) {

		convert(i);
	}
	cout << endl;
	system("pause");
	return 0;
}


