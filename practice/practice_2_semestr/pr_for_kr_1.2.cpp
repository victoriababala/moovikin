#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
class money {
protected:
    int hrn;
    int kop;
public:
    money(){}
    money( int p1, int p2): hrn(p1), kop(p2){}
    void add(int a, int b)
    {
        hrn += a;
        kop += b;
        cout << "Result of adding = " << hrn << "." << kop << endl;
    }
    void out() {
        cout  << hrn << "." << kop << endl;
    }
    money operator+(money op2);
};
money money:: operator+(money op2) {
    money temp;
    temp.hrn = hrn + op2.hrn;
    temp.kop = kop + op2.kop;
    return temp;
}
class money2 : public money {
public:
    money2(int h1, int h2): money(h1,h2){}
    void coadd(int p1, int p2) {
        hrn += p1;
        kop += p2;
        while (kop > 99) {
            hrn++;
            kop -= 100;
        }
        cout << "Result of coadding = " << hrn << "." << kop << endl;
    }
};
int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    money h(25, 25);
    money b(70, 70);
    h = h + b;
    h.out();
    /*h.add(100, 100);
    h.coadd(100, 100);*/


    system("pause");
    return 0;
}