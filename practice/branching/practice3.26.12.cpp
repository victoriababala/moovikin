#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int y, c, s;
    cout << "Enter the year: " << endl;
    cin >> y;
    s = y /100;
    if (y % 10 == 0) {
        c = s;

    }
    else {
        c = s + 1;
    }
    cout << "Century   " << c << endl;
   

    system("pause");
    return 0;
}