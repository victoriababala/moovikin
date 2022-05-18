#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
//Реалізувати клас геометричної прогресії.Поля це початковий елемент і знаменник
//прогресї.Описати методи знаходження суми прогресії, n - го члена.
class geom {
    float b1; float q;
public : 
    geom(float p1, float p2) {
        b1 = p1;
        q = p2;
    }
    void out() {
        cout << "Початковий елемент " << b1 << endl;
        cout << "Знаменник прогресії " << q << endl;
    }
    void bn() {
        int n;
        float bn;
        cout << "Введіть номер члену геометричної прогресії" << endl;
        cin >> n;
        bn = b1 * pow(q, n - 1);
        cout << n << "-иий член геометричної прогресії " << bn << endl;

    }
    void sum() {
        int n;
        float suma;
        cout << "Введіть число" << endl;
        cin >> n;
        suma = (b1 * ((pow(q, n)-1)) / (q - 1));
        cout << "Сума геометричної прогресії " << suma << endl;
    }
    ~geom(){}
};
int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    geom a(3,3);
    a.out();
    a.bn();
    a.sum();
    system("pause");
    return 0;
}