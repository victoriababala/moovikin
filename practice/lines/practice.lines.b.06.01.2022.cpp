#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    char str[200];
    char a = 'a';
    char b = 'b';
    int i;
    int a_counter;
    int b_counter;

    cout << "Enter the world " << endl;
    cin >> str;
   

    a_counter = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == a)
            a_counter++;
    }
    b_counter = 0;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == b)
            b_counter++;
    }
    if (a_counter > b_counter) { cout << "True" << endl; }
    else { cout << "False" << endl; }
    system("pause");
    return 0;
}