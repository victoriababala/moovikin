#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
double getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "enter the n" << endl;
    cin >> n;
    double* A = new double[n];
    for (int i = 0; i < n; i++) {
        A[i] = getRandomNumber(-100000, 100000);
        cout << A[i] << endl;
    }
    int max = A[0];
    int max_i = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
            max_i = i;
        }
    }
    
    int min = A[0];
    int min_i = 0 ;
    for (int i = 0; i < n; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
            min_i = i;
        }
    }
    cout << min_i << "    " << max_i;
   
    int result = 0;
    for (int i = 0; i <n; i++) {
        if ( min_i < max_i) {
            result += A[min_i +1];
           ++ min_i;
            cout << " Result is     " << result << endl;
       }
        else if (min_i >  max_i) {
            result += A[max_i +1];
          ++  max_i;
        }
        else if (min_i +1 ==max_i || max_i+1 == min_i) {
            result = min + max;
        }
    }
       
 
 
    cout << " Result is " << result + min << endl;
  


    system("pause");
    return 0;
}