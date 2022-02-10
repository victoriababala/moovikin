//Напишіть клас, поле якого ініціалізують значенням типу int.Метод класу повинен виводити на екран
//двійковий еквівалент цього числа.Використайте розроблений клас у програмі для ілюстрації його
//роботи.
#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
class binnumb {
    int number_from_kbd;
public :
    void number_inpu() 
    {
        cout << " Enter the  number ~<(-_-)>~ " << endl;
        cin >> number_from_kbd;

    }
    void numb_in_binary() 
    {
        int binum[20], i = 0;
        while (number_from_kbd != 0) {
            binum[i] = number_from_kbd % 2;
            i++;
            number_from_kbd = number_from_kbd / 2;
        }
        cout << "\n Binary Value: ";
        for (i = (i - 1); i >= 0; i--)
            cout << binum[i];
        cout << endl;

    }
    
};
int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    binnumb num;
    num.number_inpu();
    num.numb_in_binary();
    cout << "The end  (+_+) " << endl;
    system("pause");
    return 0;
}