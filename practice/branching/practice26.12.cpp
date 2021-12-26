#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a;
    int b;
    int c;
    cout << "Enter a" << endl;
    cin >> a;
    cout << "Enter b" << endl;
    cin >> b;
    cout << "Enter c" << endl;
    cin >> c;
   
    if (a > b) {
        if (a > c) {
            cout << "a is greater " << endl;
        }
        if (a < c) {
            cout << "c is greater" << endl;
        }
        else {
            cout << "a=c " << endl;
        }
    }
        if (a > c) {
            if (a > b) {
                cout << "a is greater " << endl;
            }
            if (a < b) {
                cout << "c is greater" << endl;
            }
            else {
                cout << "a=b " << endl;
            }
    }
    if (a < b) {
        if (b > c) {
            cout << "b is greater " << endl;
       }
        if (b <c) {
            cout << "c is greater" << endl;
        }
        else {
            cout << "a=c " << endl;
             
        }
    }
  
    else if (a == b && b == c) {
        cout << "0" << endl;
    }

    system("pause");
    return 0;
}