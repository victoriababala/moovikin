#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
//�������� ����, ���� ������ ����� ���� Int ������ �������(�������� �� ���������
//    ������������).����� ����� ������� ���������, �� � � ����� ����� ��������, �� ���������
//    ����������� ����� ������������ ����.ʳ������ ����� ������� ���� >= 3. ������� ���� -
//    �������, ����� ����� ����������� �������� ������ �� ����������.� �������� ���������
//    ��������, ������������ � �������� ������������ ����, ���������� ��� �� ���������� �
//    �������� ��������.��������������� ������ ������ ���� �����.
class mass {
protected:  int n = 0;
    int* m = new int[n];
    int f  ;
public:
    mass(int p1) {
        n = p1;
    }
    void init() {
        cout << "��e��� �����" << endl;
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
            cout << "� ����� ����� � ��������, �� ���������  ����������� ����� ������������ ����" << endl;
        }
        else {
            cout << "� ����� ����� ���� ��������, �� ���������  ����������� ����� ������������ ����"  << endl;
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
        cout << "���������� �����" << endl;
        for (int i = 0; i < n; ++i) {
            cout << m[i] << " ";
            cout << endl;
        }
    }
    void perevirsort() {
     
        if (f < 3) {
            cout << "�����  ������� ���������� ����������" << endl;
            sortyvannya();
            cout << "ϳ��� ���������� ����������" << endl;
            finder();
        }
        else {
            cout << "����� �� ������� ���������� ����������" << endl;
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