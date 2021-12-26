#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int nchocolate, ncoffee, npacksofmilk, numtovariv;
    float pchocolate, pcoffee, ppackofmilk, ptovariv;
    cout << "Введіть кількість куплених товарів " << endl;
    cout << "Кількість куплених плиток шоколаду: ";
    cin >> nchocolate;
    cout << "Кількість куплених банок кави: ";
    cin >> ncoffee;
    cout << "Кількість куплених пакетів молока: ";
    cin >> npacksofmilk;
    numtovariv = nchocolate + ncoffee + npacksofmilk;
    cout << "Кількість куплених товарів: " << numtovariv << endl;
    cout << "Введіть ціну товару: "<< endl;
    cout << "Ціна плитки шоколаду: ";
    cin >> pchocolate;
    cout << "Ціна кави: ";
    cin >> pcoffee;
    cout << "Ціна пакету молока: ";
    cin >> ppackofmilk;
    ptovariv = nchocolate * pchocolate + ncoffee * pcoffee + npacksofmilk * ppackofmilk;
    cout << "Загальна сума покупки: " << ptovariv << endl;
    system("pause");
    return 0;
}







 
