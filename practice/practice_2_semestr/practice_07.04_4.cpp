#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
//������� ���� comp.���� f�rst � ������ ������������; ���� second � �������
//������������.���������� ����� sq() - ����������� ����� ������������.�����
//��� ������ ��������� ������������.������� ��� �������� ��������� ����
//����� ������������.
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
            cout << "����� ������� ������������ ����� �� ����� �������  " << endl;

       }
        else if (a1.squ < a2.squ) {
            cout << "����� ������� ������������ ����� �� ����� �������  " << endl;
        }
        else if (a1.squ == a2.squ) {
            cout << "����� ���" << endl;
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