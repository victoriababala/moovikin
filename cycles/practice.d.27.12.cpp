#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int fibonacci(int number)
{
    if (number == 0)
        return 0;
    if (number == 1)
        return 1;
    return fibonacci(number - 1) + fibonacci(number - 2);
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int m;
    cout << "Enter m"<< endl;
    cin >> m;
        for (int count = 0; count < m; ++count)
            if (fibonacci(count) > m ) {
                cout << "f = " << fibonacci(count) << " " << endl;
                break;
            }
    system("pause");
    return 0;
}