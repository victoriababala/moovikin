#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
//���������� ���� ����������� �������.���� �� ���������� ������� � ���������
//�������.������� ������ ����������� ���� �������, n - �� �����.
class geom {
    float b1; float q;
public : 
    geom(float p1, float p2) {
        b1 = p1;
        q = p2;
    }
    void out() {
        cout << "���������� ������� " << b1 << endl;
        cout << "��������� ������� " << q << endl;
    }
    void bn() {
        int n;
        float bn;
        cout << "������ ����� ����� ����������� �������" << endl;
        cin >> n;
        bn = b1 * pow(q, n - 1);
        cout << n << "-��� ���� ����������� ������� " << bn << endl;

    }
    void sum() {
        int n;
        float suma;
        cout << "������ �����" << endl;
        cin >> n;
        suma = (b1 * ((pow(q, n)-1)) / (q - 1));
        cout << "���� ����������� ������� " << suma << endl;
    }
    ~geom(){}
};
int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    geom a(3,3);
    a.out();
    a.bn();
    a.sum();
    system("pause");
    return 0;
}