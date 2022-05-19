#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
class number {
protected:
    int num;
public:
    number(int p): num(p){}
    number(){}
    virtual void output() {
        cout << "Entered number = " << num << endl;
    }
};
class derived1: public number {
public:
    derived1()  {}
    derived1(int p):number(p){}
    void output() {
        cout << "Class of thousands" << endl;
        cout << "Hundreds of thousands = " << num / 1000000 << endl;
        cout << "Tens of thousands = " << (num / 100000) % 10 << endl;
        cout << "Units of thousands = " << (num / 10000) % 10 << endl;
        cout << "Units of thousands = " << (num / 1000) % 10 << endl;
        cout << "-------------------------------" << endl;
        cout << "Class of units" << endl;
        cout << "Hundreds of units = " << (num / 100) % 10 << endl;
        cout << "Dozens of units = " << (num / 10) % 10 << endl;
        cout << "Units of units = " << num % 10 << endl; 
    }
    friend istream& operator>>(istream& stream, derived1& p);
    friend ostream& operator<<(istream& stream, derived1 p);
};
ostream& operator<<(ostream& stream, derived1 p) {
    p.output();
    return stream;
}
istream& operator>>(istream& stream, derived1& p) {
    cout << "Enter the number" << endl;
    stream >> p.num;
    return stream;
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    /*derived1 A(9876543);
    A.output();*/
    derived1 B;
    cin >> B;
    cout << B;
    system("pause");
    return 0;
}
