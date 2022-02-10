//Напишіть клас, поле якого містить масив літер.Метод класу повинен визначати максимальну
//довжину послідовності літер нижнього регістру у заданому масиві.Використайте розроблений клас у
//програмі для ілюстрації його роботи.
#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    class letters {
        char letters_mass[200];
        int counter = 0, numbermax = 0;
    public:
        void input() {
            cout << "Enter letters  " << endl;
            cin >> letters_mass;
            cout << "----------------------------" << endl;
        }
        void numb_of_small_lett() {
            for (int i = 0;  i < 200;  i++)
            {
                if (letters_mass[i] >= 64 && letters_mass[i] <= 122) 
                {
                    if (letters_mass[i] >= 97 && letters_mass[i] <= 122)
                    {
                        counter++;
                        if (counter > numbermax)
                        {
                            numbermax = counter;
                        }
                    }
                }
                else counter = 0;
            }
            cout << "The largest sequence of small letters is " << numbermax << endl;
        }
       
    };
    letters a;
    a.input();
    a.numb_of_small_lett();
    cout << "----------------------------" << endl << " <(^_^)/" << endl << "  <(^_^)/" << endl << "   <(^_^)/" << endl;
    system("pause");
    return 0;
}