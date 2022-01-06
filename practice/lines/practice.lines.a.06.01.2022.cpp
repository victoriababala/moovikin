// C++ implementation for representing
// each word in a sentence as sum of
// ASCII values of each word
#include <iostream>
#include <string>
#include <vector>
using namespace std;


long long int ASCIIWordSum(string str,
	vector<long long int>& sumArr)
{

	int l = str.length();
	int sum = 0;
	long long int bigSum = 0L;
	for (int i = 0; i < l; i++) {

		
		if (str[i] == ' ') {

			bigSum += sum;
			sumArr.push_back(sum);
			sum = 0;
		}
		else

			
			sum += str[i];
	}

	
	sumArr.push_back(sum);
	bigSum += sum;
	return bigSum;
}
int main()
{ 
	char str[200] = "";

	cout << "Enter the world "<< endl;
	cin >> str;
	vector<long long int> sumArr;

	
	long long int sum = ASCIIWordSum(str, sumArr);

	cout << "Sum of ASCII values:" << endl;
	for (auto x : sumArr)
		cout << x << " " << endl;
	system("pause");
	return 0;
}
