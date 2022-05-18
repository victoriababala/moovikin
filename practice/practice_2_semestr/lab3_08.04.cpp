#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
//Напишіть клас, який містить масив типу Int заданої довжини(задається за допомогою
//    конструктора).Метод класу повинен визначити, чи є у цьому масиві елементи, які утворюють
//    послідовність чисел натурального ряду.Кількість чисел повинна бути >= 3. Створіть клас -
//    нащадок, метод якого сортуватиме елементи масиву за зростанням.У випадкові відсутності
//    елементів, розташованих у порядкові натурального ряду, відсортуйте дані за зростанням і
//    повторіть перевірку.Продемонструйте роботу методів обох класів.
class mass {
protected:  int n = 0;
    int* m = new int[n];
    int f  ;
public:
    mass(int p1) {
        n = p1;
    }
    void init() {
        cout << "Ввeдіть масив" << endl;
         for (int i = 0; i < n; i++) {
             cin >> m[i];
         }
        
    }
 void finder() {
     
        for (int i = 0; i < n; i++) {
            if ((m[i] + 1) == m[i + 1] ) {
               ++f;
            }
            
        }
        if (f >= 3) {
            cout << "У цьому масиві є елементи, які утворюють  послідовність чисел натурального ряду" << endl;
        }
        else {
            cout << "У цьому масиві немає елементів, які утворюють  послідовність чисел натурального ряду"  << endl;
        }
       
    }
};
class der : public mass {
public: 
    der(int n): mass(n){}
    void sortyvannya() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; ++j)
            {
                if (m[j] > m[j + 1]) {
                    swap(m[j], m[j + 1]);

                }
            }
        }
        cout << "Сортований масив" << endl;
        for (int i = 0; i < n; ++i) {
            cout << m[i] << " ";
            cout << endl;
        }
    }
    void perevirsort() {
     
        if (f < 3) {
            cout << "Масив  потребує повторного сортування" << endl;
            sortyvannya();
            cout << "Після повторного сортування" << endl;
            finder();
        }
        else {
            cout << "Масив не потребує повторного сортування" << endl;
        }
    }
};
int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    mass f(5);
    f.init();
    f.finder();
    der d(7);
    d.init();
   
    d.finder();
    d.perevirsort();



    system("pause");
    return 0;
}