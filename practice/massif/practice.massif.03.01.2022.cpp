#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
double getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<double>(rand() * fraction * (max - min + 1) + min);
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "enter the n" << endl;
    cin >> n;
    double* A = new double[n];
    for (int i = 0; i < n; i++) {
        A[i] = getRandomNumber(-100000, 100000);
        cout << A[i] << endl;
    }
    double res = 0; double answer;
    for (int i = 0; i < n; i++) {
        res += A[i];
    }
    answer = res / n;
    cout << "Arithmetic mean is " << answer << endl;

    system("pause");
    return 0;
}