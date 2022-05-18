#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstring>
using namespace std;
//1.  Створіть клас людини, що має ім’я(вказівник на рядок), вік та вагу.Визначте конструктор, деструктор та метод виведення.
//На основі цього класу створіть клас повнолітньої людини, яка має номер паспорту
//.Визначте конструктори, функцію для ініціалізації поля номеру паспорту та метод виведення.
class person {
protected:  char name[30];
         int age; int  weight;
public:
    person(char *g, int a, int w) 
    {
        strcpy_s(name, g);
        age = a;
        weight  = w;
    }
    ~person() { cout << "The end" << endl; }
    void output() 
    {
        cout << "Name of the person is " << name << endl;
        cout << "Age of the person is " << age << endl;
        cout << "Weight of the person is " << weight << endl;
    }
};

class adult : public person {
    char pnum[14];
public:
    adult(char* g, int a, int w):person(g,a,w){}
    void passnum() {
        cout << "Enter passport number" << endl;
        for (int i = 0; i < 14; i++)
        {
            cin >> pnum[i];
        }
    }
    void out() {
        cout << "Name of the person is " << name << endl;
        cout << "Age of the person is " << age << endl;
        cout << "Weight of the person is " << weight << endl;
        cout << "Passport number  of the person is " ;
        for (int i = 0; i < 14; i++)
        {
           cout << pnum[i];
        }
        cout << endl;
    }
};
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char f[30] = "LUNA";
   adult first(f,17,60);
   first.passnum();
    first.out();


    system("pause");
    return 0;
}