#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, c;
    cout << "Enter first number" << endl;
    cin >> a;
    cout << "Enter second number" << endl;
    cin >> b;
    while (a > 0 && b > 0) {

        if (a > b) {
            a %= b;
        }
        else {
            b %= a;
        }
    }
   { cout << "мяд = " << a +b << endl; }


    system("pause");
    return 0;
}