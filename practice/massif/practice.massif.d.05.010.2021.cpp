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
    for (int i = 1; i < N+1; i++) {
       cin >> V[i];
    }
    int max = V[1];
    int max_i = 0;
    for (int i = 1; i < N +1; i++)
    {
        if (V[i] > max)
        {
            max = V[i];
            max_i = i;
        }
    }
    cout << "Last maximum element is " << max_i << " ";

    system("pause");
    return 0;
}