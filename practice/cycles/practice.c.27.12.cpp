#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a;
    double  answer;
    cout << "������ ������� �������� �����������" << endl;
    cin >> a;
    int* arr = new int[a];
    for (int i = 0; i < a; i++) {
        cout << "������ ������� �����������" << endl;;
        cin >> arr[i];
    }
    double res = 1.;
    for (int i = 0; i < a-1; i++) {
        res *= arr[i];
    answer =  pow(res, 1.0 / (a-1.0));
}
    cout << answer << endl ;

    system("pause");
    return 0;
}