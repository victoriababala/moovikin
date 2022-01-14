#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
int factorial(int a) {
    int factorial = 1;
    for (int l = 1; l <= a; l++) {
        factorial *= l;
    }
    return factorial;
}
int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x;
    
    cout << "X = ";
    cin >> x;
    cout << "Answer is " << factorial(x) << endl;

    system("pause");
    return 0;
}