#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
//Створити клас Angle для роботи з кутами на площині, що задаються в градусах і
//хвилинах.Обов'язково повинні бути реалізовані: переведення у радіани,
//переведення до діапазону 0 - 360, збільшення й зменшення кута на задану величину,
//одержання синуса, порівняння кутів.
class Angle {

    int degree, minute;
public:
    Angle(int p1, int p2): degree(p1), minute(p2) { }
    Angle() : degree(0), minute(0) { }
    Angle(int p1) : degree(p1), minute(0) {}
    ~Angle() {}

    void range()
    {
        if (minute < 0)
        {
            degree--;
            minute += 60;
        }
        if (degree > 0)degree = degree % 360;
        else degree = degree % 360 + 360;
        cout << "Answer is " << degree  << endl;
    }
    double radian()
    {
        return (degree + minute / 60.) * 3.14 / 180.;
    }
    void  sin_()
    {
        cout << "Sin of angle = " << sin(radian()) << endl;;
    }
    
    friend void comparison(Angle& a1, Angle& a2)
    {
        int res;
        int g1 = a1.minute + a1.degree * 60;
        int g2 = a2.minute + a2.degree * 60;
        if (g1 < g2) res = -1;
        else if (g1 > g2) res = 1;
        else res = 0;
        if (res == -1) cout << "Angle1 < Angle2\n";
        else if (res == 1) cout << "Angle1 > Angle2\n";
        else cout << "Angle1 = Angle2\n";
    }
    void init() {
        cout << "Enter the degree" << endl;
        cin >> degree;
        cout << "Enter the minutes" << endl;
        cin >> minute;
    }
    friend ostream& operator<<(ostream& stream, Angle p);
    friend istream& operator>>(istream& stream, Angle &p);
    Angle operator+(int n);
    Angle operator-(int n);
};
ostream& operator<<(ostream& stream, Angle p) {
    stream << p.degree << "." << p.minute <<"°" << endl;
    return stream;
}
istream& operator>>(istream& stream, Angle &p) {
    p.init();
    return stream;
}
Angle Angle::operator+(int n) {
    Angle b;
    b.degree = degree + n;
    b.minute = minute ;
    return b;
}
Angle Angle::operator-(int n) {
    Angle b;
    b.degree = degree - n;
    b.minute = minute;
    return b;
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Angle a;
    cin >> a;
    Angle c;
    cout << "----------------------" << endl;
    cin >> c;
    cout << "----------------------" << endl;
    cout << "----------------------" << endl;
    comparison(a, c);
    cout << "----------------------" << endl;
    cout << "----------------------" << endl;
    a.range();
    cout << "----------------------" << endl;
    a = a - 30;
    cout << a;
    cout << "----------------------" << endl;
    c = c + 65;
    cout << "----------------------" << endl;
    cout << c;
    cout << "----------------------" << endl;
    a.sin_();
    
    system("pause");
    return 0;
}
