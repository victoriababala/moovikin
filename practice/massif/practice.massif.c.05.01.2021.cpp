#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int N;
    cout << "Enter N  " << endl;
    cin >> N;
    int* V = new int[N];
    for (int i = 1; i < N; i++) {
        V[i] = rand()/100;
        cout << V[i] << endl;
    }
    int number = 0;
    for (int i = 1; i < N; i++) {
        if (V[i] % 2 != 0 && i % 2 == 0) {
            number += 1;
        }
    }
    cout << "Answer is " << number << endl;

    system("pause");
    return 0;
}