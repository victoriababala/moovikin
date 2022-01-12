//” файл УSPORTФ записати дан≥ про член≥в зб≥рноњ команди з легкоњ
//атлетики : пр≥звище спортсмена, в≥к, клуб, за €кий виступаЇ, к≥льк≥сть
//виступ≥в за зб≥рну крањни, особисте дос€гненн€ та Ївропейське
//дос€гненн€.—формувати файл У—2Ф, де записати : пр≥звища
//спортсмен≥в, назву клубу, €к≥ мають дос€гненн€ на р≥вн≥
//Ївропейських.Ќа екран диспле€ вивести пр≥звища спортсмен≥в, €к≥
//виступали за зб≥рну команду б≥льше двох раз≥в.
#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
    struct zbirna {
        string surname;
        int age;
        string club;
        int number_perf;
        string personal_achiev;
        string euro_achiev;
    };
    int n = 5;

    zbirna arr[5];
    cout << "enter info:" << '\n';
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].surname >> arr[i].age >> arr[i].club >> arr[i].number_perf >> arr[i].personal_achiev >> arr[i].euro_achiev;
    }
    ofstream my_file("SPORT.txt");
    for (int i = 0; i < n; i++)
    {
        my_file << arr[i].surname << ' ' << arr[i].age << ' ' << arr[i].club << ' ' << arr[i].number_perf << ' ' << arr[i].personal_achiev << ' ' << arr[i].euro_achiev << '\n';
    }
    my_file.close();
    cout << "Played more than twice for the national team" << endl;
    ofstream my_fl("C2.txt");
    for (int i = 0; i < n; i++)
    {
        if (arr[i].euro_achiev != "-" ) {
            my_fl << arr[i].surname << ' ' << arr[i].club << '\n';
            if (arr[i].number_perf > 2) cout << arr[i].surname << ' ' << '\n';

        }
    }
    my_fl.close();



    cout << endl;

    system("pause");
    return 0;
}

