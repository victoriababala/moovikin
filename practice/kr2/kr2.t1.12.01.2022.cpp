//� ��������� �������� ��� ��� ����� ����� ������� � �����
//�������� : ������� ����������, ��, ����, �� ���� �������, �������
//������� �� ����� �����, �������� ���������� �� �����������
//����������.������� ������� ����������, �� ��������� �� �����
//������� ����� ���� ����.
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
        cout << "������  �������: ";
        cin >> surname;
        cout << "������ ��: ";
        cin >> age;
        cout << "������  ����, �� ���� �������: ";
        cin >> club;
        cout << "������ ������� ������� �� ����� ����� : ";
        cin >> number_perf;
        cout << "������ �������� ����������: ";
        cin >> personal_achiev;
        cout << "������ �����������  ����������.";
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
