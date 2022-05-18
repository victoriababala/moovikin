#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
//Створити клас KYLYA з полем для радіуса.Описати конструктор з аргументом, та без
//аргумента у випадку радіуса рівного 3. Описати функцію для знаходження об’єму.Створити
//дружню функцію – яка видаватиме об’єм кулі при зменшенні радіуса.
class KYLYA {

    const  double  pi = 3.1415926;
    double static r;
    double V;
   
public:
    KYLYA() {
        r = 3;
    }
    KYLYA(float p) {
        r = p;
    }
   
    ~KYLYA(){}
    void volume() {
        V = 4/3. * pi *pow(r,3);
        cout << "The volume of the sphere = " << V << endl;
    }
public:
    friend void n(int p) {
        double new_r = r - p;
        if (r < 0)
        {
            cout << "Error, radius cannot be negative. Enter new parameter" << endl;
            cin >> p;
        }
        new_r = r - p;
        double new_v = 4 / 3. * 3.1415926 * pow(r, 3);
        cout << "The new volume of the sphere = " << new_v << endl;

    }
};
int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    KYLYA A;
    A.volume();
    KYLYA B(4);
    B.volume();
    



    system("pause");
    return 0;
}