#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
class num1 {
   double  x, y, first, second, result;
public:
    
    void Read() {
        cout << "Enter the X" << endl;
        cin >> x;
        cout << "Enter the Y" << endl;
        cin >> y;
    }
    void Init() {
        first = x;
        second = y;
    }
    
    void distance() {
        result = sqrt(first * first + second * second);
    }
    void Display()
    {
        cout << "Answer is " << result << endl;
    }
};
int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    num1 a;
    a.Read();
    a.Init();
    a.distance();
    a.Display();


    system("pause");
    return 0;
}