#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    int* X = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> X[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (X[j] > X[j + 1]) {
                swap(X[j], X[j + 1]);
                
            }
        }
    }
    cout << "Sorted massif " << endl;
    for (int i = 0; i < n; ++i) {
        cout << X[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}