#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
struct coordinates {
    float x;
    float y;
};
class lamana{
protected:
    int q;
    coordinates* array = new coordinates[q];
public:
    lamana(int p): q(p){}
    friend istream& operator>>(istream& stream, lamana& p);
    void output() {
        for (int i = 0; i < q+1; i++)
        cout << i + 1 << " point coordinates = " << "(" << array[i].x << ";" << array[i].y << ")" << endl;
    }
    virtual void distance() {
        double result =0;
        for (int i = 0; i < q+1; i++) {
            result += pow(pow(array[i].x - array[i + 1].x, 2) + pow(array[i].y - array[i + 1].y, 2),0.5);
        }
        cout << "Length of line = " << result << endl;
    }
};
istream& operator>>(istream& stream, lamana& p) {
    for (int i = 0; i < p.q+1; i++)
    {
        cout << "Enter the coordinate X  of "<< i+1 << " point" << endl;
        stream >> p.array[i].x;
        cout << "Enter the coordinate Y  of " << i + 1 << " point" << endl;
        stream >> p.array[i].y;
    }
    return stream;
}
class derived : public lamana {
public:
    derived(int p):lamana(p){}
    void distance() {
        double length = 0;
        length = pow((pow(array[q].x - array[0].x, 2) + pow(array[q].y - array[0].y, 2)), 0.5);
        cout << "Length of line = " << length << endl;
    }
    friend istream& operator>>(istream& stream, derived& p);
};
istream& operator>>(istream& stream, derived& p) {
    for (int i = 0; i < p.q+1; i++)
    {
        cout << "Enter the coordinate X  of " << i + 1 << " point" << endl;
        stream >> p.array[i].x;
        cout << "Enter the coordinate Y  of " << i + 1 << " point" << endl;
        stream >> p.array[i].y;
    }
    return stream;
}
int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    lamana d(3);
    cin >> d;
    d.distance();
    d.output();
    derived l(3);
    cin >> l;
    l.output();
    l.distance();
    system("pause");
    return 0;
}
