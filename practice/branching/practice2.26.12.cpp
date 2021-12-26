#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x;
    cout << "Enter the number :" << endl;
    cin >> x;  
    if (x % 10 == 5 ) {
            cout << "TRUE" << endl;
    }
     else if (x % 100 > 49 && x % 100 < 59) {
         cout << "TRUE" << endl;
    }
     else if ( x % 1000 > 499 && x % 1000 < 599) {
        cout << "TRUE" << endl;
    }

    else {
        cout << "FALSE" << endl;
    }


    system("pause");
    return 0;
}
