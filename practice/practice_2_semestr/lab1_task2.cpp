//Поле fіrst - ціле позитивне число, координата курсору / покажчика по горизонталі; поле second - ціле
//позитивне число, координата курсору по вертикалі.Реалізувати метод changex() - зміна горизонтальної
//координати курсору; реалізувати метод changey() - зміна вертикальної координати курсору.Методи
//повинні перевіряти вихід за кордон екрана.
#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
class num2 {
    int first, second;
public:
    num2(int p1,int p2)
    {
        first = p1; second = p2;
    }
    num2(int p1)
    {
        first = p1; second = p1;
    }
    void changex() {
        int x;
        cout << "Введіть нову координату X" << endl;
        cin >> x;
        if (x >= 0 && x <= 1980) {
            first = x;
        }
        else { cout << "Ви вийшли за межі екрану" << endl; }
        
    }
   void changey() {
       int y;
       cout << "Введіть нову координату Y" << endl;
       cin >> y;
        if (y >= 0 && y <= 1080) {
            second = y;
        }
        else { cout << "Ви вийшли за межі екрану" << endl; }

    }
    void output() {
        cout << "Координата Х=" << first << endl<< "Координата Y=" << second << endl;
    }
};

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    num2 b(0,0);
    b.output();
    b.changex();
    b.changey();
    b.output();
    


    system("pause");
    return 0;
}