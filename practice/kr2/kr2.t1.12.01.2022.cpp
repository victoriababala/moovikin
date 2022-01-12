//” структуру записати дан≥ про член≥в зб≥рноњ команди з легкоњ
//атлетики : пр≥звище спортсмена, в≥к, клуб, за €кий виступаЇ, к≥льк≥сть
//виступ≥в за зб≥рну крањни, особисте дос€гненн€ та Ївропейське
//дос€гненн€.¬ивести пр≥звища спортсмен≥в, €к≥ виступали за зб≥рну
//команду б≥льше двох раз≥в.
#include <iostream>
#include <Windows.h>
using namespace std;
struct zbirna {
    string surname;
    int age;
    string club;
    int number_perf;
    string personal_achiev;
    string euro_achiev;
    void vvid_zbirna()
    {
        cout << "¬вед≥ть  пр≥звище: ";
        cin >> surname;
        cout << "¬вед≥ть в≥к: ";
        cin >> age;
        cout << "¬вед≥ть  клуб, за €кий виступаЇ: ";
        cin >> club;
        cout << "¬вед≥ть к≥льк≥сть виступ≥в за зб≥рну крањни : ";
        cin >> number_perf;
        cout << "¬вед≥ть особисте дос€гненн€: ";
        cin >> personal_achiev;
        cout << "¬вед≥ть Ївропейське  дос€гненн€.";
        cin >> euro_achiev;
    }

};


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    zbirna n[5];

   
    for (int i = 0; i < 5; i++)
    {
        cout << "Please enter " << i + 1 << " sportsman info" << '\n';
        n[i].vvid_zbirna();
    }
    cout << endl;
    cout << "Played more than twice for the national team" << endl;
    for (int i = 0; i < 5; i++)
        if (n[i].number_perf > 2) cout << n[i].surname << ' ' << '\n';
    cout << endl;

    cout << endl;

    system("pause");
    return 0;
}
