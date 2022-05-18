#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
class vector {
    double scalar;
    struct vectors {
        double x1, x2, x3;
        void input() {
            cout << "Enter the first coordinate   " << endl;
            cin >> x1;
            cout << "----------------------------" << endl;
            cout << "Enter the second coordinate  " << endl;
            cin >> x2;
            cout << "----------------------------" << endl;
            cout << "Enter the second coordinate  " << endl;
            cin >> x2;
            cout << "----------------------------" << endl;
            cout << "Enter the third coordinate  " << endl;
            cin >> x3;
            cout << "----------------------------" << endl;

        }
    };
public:
    vectors two[2];
    void filling() {
        for (int i = 0; i < 2; i++)
        {
            cout << "Please enter " << i + 1 << " vector" << '\n';
            two[i].input();
        }
    }
    void scalar() {
        
        scalar = two[0].x1 * two[1].x1 + two[0].x2 * two[1].x2 + two[0].x3 * two[1].x3;
        cout << "Answer is" << scalar << endl;
    }
};
int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);



    system("pause");
    return 0;
}
