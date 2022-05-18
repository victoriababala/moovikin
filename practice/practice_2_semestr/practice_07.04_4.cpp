#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
//Описати клас comp.Поле fіrst – ширина прямокутника; поле second – довжина
//прямокутника.Реалізувати метод sq() - знаходження площі прямокутника.Метод
//для пошуку периметра прямокутника.Функцію для порівняня периметрів двох
//різних прямокутників.
class prymokytnuk {
    int first; int second;
    int squ;
public :
    prymokytnuk(int p1, int p2) {
        first = p1;
        second = p2;
    }
    ~prymokytnuk() {}
    
    void sq(){
         squ = first * second;
    }
    void per() {
        int per = 2 * first + 2 * second;
    }
    friend void porivnyannya(prymokytnuk& a1, prymokytnuk& a2)
    {
        if (a1.squ > a2.squ) {
            cout << "Площа першого прямокутника більша за площу другого  " << endl;

       }
        else if (a1.squ < a2.squ) {
            cout << "Площа другого прямокутника більша за площу першого  " << endl;
        }
        else if (a1.squ == a2.squ) {
            cout << "Площі рівні" << endl;
        }
    }
};

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    prymokytnuk s(13, 13);
    prymokytnuk x(13, 13);
    s.sq();
    x.sq();
    porivnyannya(s, x);

    system("pause");
    return 0;
}