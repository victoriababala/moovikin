#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n; 
    int result1 = 1;
    float result2 = 1;
 /*   double result3 = 1;*/
    double y = 1;
    int x = 3;
    cout << "Enter n " << endl;
    cin >> n;
    cout << "------------------------------------------------------------------------" << endl;
    for (int i = 1; i <= n; i++) {
        result1 += pow((x - 1), i);
        cout  << result1 << " | ";
    }
    
   cout<< '\n';
   cout << "------------------------------------------------------------------------" << endl;
    cout << "Result is " << result1 << endl;
    cout << "------------------------------------------------------------------------" << endl;
    for (int i = 1; i <= n; i++) {
        result2 += 1 / (pow((x * x + 1), i));
        cout << result2 << " | ";
    }
    
    cout << '\n';
    cout << "------------------------------------------------------------------------" << endl;
    cout << "Result is " << result2 << endl;
    cout << "------------------------------------------------------------------------" << endl;

    cout << "------------------------------------------------------------------------" << endl;
    double result3 = 1;
    for (int i = 1; i <= n; i++) {
        result3 += pow(sin(y), i);
        cout << result3 << " | ";
        
    }
    cout << '\n';
    cout << "------------------------------------------------------------------------" << endl;
    cout << "Result is " << result3 << endl;
    cout << "------------------------------------------------------------------------" << endl;
    system("pause");
    return 0;
}