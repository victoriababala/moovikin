#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x ;
    int k = 0;
    cout << "¬вед≥ть число :" << endl;
    cin >> x;
    if (!x)
        ++k;
    while (x)
    {
        k++;
        x /= 10;
    }
    cout << k << endl;
    system("pause");
    return 0;
}