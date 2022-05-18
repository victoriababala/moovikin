#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
//Описати клас comp.Поле fіrst – дійсна частина числа; поле second – сомплекна
//частина числа.Реалізувати метод mod() - знаходження модуля комплексного числа.
//А також функцію яка реалізуватиме віднімання двох комплексних чисел.
class comp {
    int  first; int second;
public:
    int getfirst() { return first; }
    int getsecond() { return second; }
    comp(int p1, int p2) {
        first = p1; 
        second = p2;

    }
    ~comp() { cout << "The end" << endl; }
    void mod() {
        float modul;
        modul = sqrt(first * first + second * second);
        cout << "Modul = " << modul << endl;

    }
   
    friend  void subtr(comp& c, comp& v)  {
        int sub1, sub2;
        if (c.first > v.first) {
            sub1 = c.first - v.getfirst();
            sub2 = c.getsecond() - v.second;
            cout << " Answer is " << sub1 << " + " << sub2 << "i" << endl;
        }
        else {
            sub1 = v.first - c.first;
            sub2 = v.second - c.second;
            cout << " Answer is " << sub1 << " + " << sub2 << "i" << endl;
        }
    }
};
   
int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    comp m(7, 7);
    m.mod();
    comp n(5, 5);
    n.mod();
    subtr(m, n);

    
    system("pause");
    return 0;
}