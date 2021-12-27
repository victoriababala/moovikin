#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int  k = 0;
    int R , x;
    int  y;
    cout << "Enter R:" << endl;
    cin >> R;
    for (x = -R; x <= R; x++)
    {
        for (y = -R; y <= R; y++)
        {
            if (x * x + y * y <= R * R)
            {
                k++;
            }
        }
    }
    cout << k << endl;


    system("pause");
    return 0;
}