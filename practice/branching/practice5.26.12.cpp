#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, c;
    cout << "Enter the a" << endl;
    cin >> a;
    cout << "Enter the b" << endl;
    cin >> b;
    cout << "Enter the c" << endl;
    cin >> c;
     if (a == b && b == c) { cout << "��������� ������������" << endl; }
     else if (a + b > c && a + c > b && b + c > a) {

        if (a == b || a == c || b == c) {
            cout << "��������� ������������ " << endl;
        }
       
        else { cout << "��������� ������������ " << endl; }
    }
    else { cout << "��������� �� ���� " << endl; }


    system("pause");
    return 0;
}