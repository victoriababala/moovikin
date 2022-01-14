#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
void rhomb() {
    cout << "    *    " << endl << "  * * *  " << endl << "* * * * *" << endl 
        << "  * * *  " << endl << "    *    " << endl << endl;
 }
void square() {
    cout << "* * * * *" << endl << "* *   * *" << endl << "*   *   *" << endl 
        << "* *   * *" << endl << "* * * * *" << endl << endl;
}
void ellipse() {
    cout << "    *******   " << endl << "  *         * " << endl << " *   Hello!  *" << endl
      << "  *         * " << endl << "    *******   " << endl;
}
void symbol() {
    cout << "Enter the number" << endl;
    char symbol;
    cin >> symbol;
    cout << symbol << "   " << symbol << "   " << symbol << endl << "  " << symbol
    << "   " << symbol << "  " << endl << symbol << "   " << symbol << "   " << symbol << "   " << endl;
}
void rectangle() {
    cout << "Enter the number" << endl;
    char number;
    cin >> number;
    cout << number << " ------- " << number << endl
        << "         " << endl
        << "|" << "    " << number << "    " << "|" << endl
        << "         " << endl
        << number << " ------- " << number << endl;


}
int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Task 1.1 " << endl;
    rhomb();
    square();
    cout << "Task 1.2 " << endl;
    
    symbol();
    cout << endl;
    rectangle();
    cout << endl;

    system("pause");
    return 0;
}