#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int R, x, y, z;
    cout << "Enter the R" << endl;
    cin >> R;
    cout << "Enter the coordinates of point" << endl;
    cin >> x >> y >> z;
    float hyp = sqrt(x * x + y * y + z * z);
    if (hyp < R) {
        cout << "The point belongs to the circle" << endl;
    }
    else { cout << "The point doesn't belongs to the circle" << endl; }

    system("pause");
    return 0;
}