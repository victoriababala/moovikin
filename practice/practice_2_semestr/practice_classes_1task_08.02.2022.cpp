//Напишіть клас працівників фірми.Клас повинен містити поля з іменами працівників та розміром
//їхньої заробітної платні.Реалізуйте методи, які надаватимуть можливість переглянути дані як
//конкретного працівника(за його умовним ідентифікаційним номером), так і усіх працівників одразу.
//Використайте розроблений клас у програмі для ілюстрації його роботи.
#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
class workers {
    struct workers_info {
        string name;
        int salary;
        void input_workers()
        {
            cout << "Enter the name ";
            cin >> name;
            cout << "Enter the salary ";
            cin >> salary;
        }
            
    };
    workers_info firm[5];
    int id_num;
public:
    void filling() {
        
        for (int i = 0; i < 5; i++)
        {
            cout << "Please enter " << i + 1 << " worker of the firm info" << '\n';
            firm[i].input_workers();
        }
    }

    void output_allinfo() {
        cout << "------------------------------------------------------------------------------" << endl <<
            "Info about all workers " << endl << "------------------------------------------------------------------------------" << endl;
        for (int i = 0; i < 5; i++)
        {
           
            cout << "Information about " << i + 1 << " worker of the firm " << " Name:" << firm[i].name << " |||| " << " Salary:   " << firm[i].salary << '\n'
                << "------------------------------------------------------------------------------" << endl;
           
        }
    }
    void input_for_id() {
        cout << "Enter the ID of the employee whose information you want to know" << endl;
        cin >> id_num;
    }
    void outputfor_oneperson() {
        if (id_num > 5 || id_num < 0) cout << " Error: Wrong ID" << endl;
        else cout << "Information about " << id_num << " worker of the firm " <<endl << "------------------------------------------------------------------------------" << endl << " Name:" << firm[id_num -1].name << " |||| " << " Salary:   " << firm[id_num-1].salary << '\n'
            << "------------------------------------------------------------------------------" << endl;
        
    }
};

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    workers v;
    v.filling();
    v.input_for_id();
    v.outputfor_oneperson();
    v.output_allinfo();
    cout << endl<< "The end" << endl;


    system("pause");
    return 0;
}