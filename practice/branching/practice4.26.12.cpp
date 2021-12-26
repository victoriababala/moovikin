#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a1, b1, c1, a2, b2, c2, x, y;
    cout << "Enter the a1 " << endl;
    cin >> a1;
    cout << "Enter the a2 " << endl;
    cin >> a2;
    cout << "Enter the c1 " << endl;
    cin >> c1;
    cout << "Enter the b1 " << endl;
    cin >> b1;
    cout << "Enter the b2 " << endl;
    cin >> b2;
    cout << "Enter the c2 " << endl;
    cin >> c2;
    if (a1 * b2 - a2 * b1 == 0) { cout << "Прямі паралельні" << endl; }
    else {
    y = (c1*a1*b1-a1*c2)/(a1*b1*a2- b2);
    x = (c2 - b2 * y) / b1;
    cout << "Координати точки перетину : " << endl;
    cout << " ( " << x << ", " << y << " )" << endl;
    }


    system("pause");
    return 0;
}