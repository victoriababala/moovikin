#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char str[200];
    char z = 'z';
    int i;
    int z_number;

    cout << "Enter the world " << endl;
    cin >> str;


    z_number = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == z) {
            z_number = i;
            cout << str[z_number + 1] << endl;
            break;
        }
       
    }


    system("pause");
    return 0;
}