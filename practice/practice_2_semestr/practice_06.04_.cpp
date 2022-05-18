//Написати клас вектора на площині.Прописати методи знаходження довжини вектора та множення вектора на число.
//Описати дружню функцію до класу, яка шукатиме кут нахилу вектора до додатнього напрямку осі оХ.Всі інші методи при потребі.
#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
class vector {
    int x, y;
public :
    vector(int p1, int p2) {
       x =  p1;
       y = p2;
      
    }
    void length() {
        double l;
        l = sqrt(x * x + y * y);
        cout << "The length of the vector " << l << endl;
    }
    void  multp() {
        float a;
        cout << "Enter the number you want to mult " << endl;
        cin >> a;
        cout << "Multiplied vector " << "(" << a * x << ";" << a * y << ")" << endl;
    }
    void angle() {
        double an;
        an = atan(((y / x) * 3.141592653589793238462643) / 180);
        cout << "Кут нахилу вектора до додатнього напрямку осі OX = " << an << "°" << endl;
    }
};
int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vector first(6, 6);
    first.length();
    first.multp();
    first.angle();
    system("pause");
    return 0;
}