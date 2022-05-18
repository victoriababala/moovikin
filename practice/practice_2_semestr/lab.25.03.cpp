#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
class Angle {
    int degree, minute;
public:
    Angle(int p1, int p2) {
        degree = p1; minute = p2;
    }
    Angle() {
        degree = 0; minute = 0;
    }
    Angle(int p1) {
        degree = p1; minute = 0;
    }
    ~Angle (){}
    int getDegree() { return degree; }
    int getMinute() { return minute; }
    void range()
    {
        if (minute < 0)
        {
            degree--;
            minute += 60;
        }
        if (degree > 0)degree = degree % 360;
        else degree = degree % 360 + 360;
        cout << "Answer is" << degree << endl;
    }
    double radian()
    {
        return (degree + minute / 60.) * 3.14 / 180.;
    }
    void  sin_()
    {
        cout << "Sin of angle = " << sin((degree + minute / 60.) * 3.14 / 180.) << endl;;
    }
    void display() {
        cout << " Degree =" << degree << "," << "minutes =" << minute << endl;
    }
    friend void porivnyannya(Angle& a1, Angle& a2)
    {
        int res;
        int g1 = a1.getMinute() + a1.getDegree() * 60;
        int g2 = a2.getMinute() + a2.getDegree() * 60;
        if (g1 < g2) res= -1;
        else if (g1 > g2) res = 1;
        else res = 0;
        if (res == -1) cout << "Angle1 < Angle2\n";
        else if (res == 1) cout << "Angle1 > Angle2\n";
        else cout << "Angle1 = Angle2\n";
    }
    void add() {
        int dodanok;
        int result;
        cout << "Enter the number you want add  " << endl;
        cin >> dodanok;
        result = degree + dodanok;
        cout << " Answer is " << result << "," << minute << endl;

    }
    void subtract() {
        int sub;
        int result;
        cout << "Enter the number you want subtract o " << endl;
        cin >> sub;
        result = degree - sub;
        cout << " Answer is " << result << "," << minute << endl;
    }
};
int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Angle b(25, 12);
    cout << "Кут В = ";
    b.display();
    cout << endl;
    b.add();
    b.subtract();
    cout << "Кут в радіанах" << b.radian() << endl;
    cout << " Порівняння двох кутів" << endl;
    Angle c(134, 36);
    Angle f(78, 98);
    c.display(); f.display();
    porivnyannya(c, f);
    Angle d(30);
    d.display();
    d.sin_();
    cout << " Порівняння двох кутів" << endl;
    Angle s(18, 69);
    Angle r(18, 69);
    s.display(); r.display();
    porivnyannya(s, r);
    Angle t(420);
    t.range();


    system("pause");
    return 0;
}