#include <iostream>
#include <Windows.h>
#include <cmath>
#include<string>
#include <algorithm>
using namespace std;
void removeSpaces(string& str)
{
	//n – довжина вихідного рядка
	int n = str.length();

	// i  вказує на наступну позицію, яку потрібно заповнити
	// вихідний рядок/j вказує на наступний символ
	// в оригінальному рядку
	int i = 0, j = -1;

	// Знайдено прапор, який має значення true
	bool spaceFound = false;

	// Обробляє провідні місця
	while (++j < n && str[j] == ' ');

	// прочитати всі символи вихідного рядка
	while (j < n)
	{
		// якщо поточні символи не є пробілом
		if (str[j] != ' ')
		{
			//видалити попередні пробіли перед крапкою,
			// кома і знак питання
			if ((str[j] == '.' || str[j] == ',' ||
				str[j] == '?') && i - 1 >= 0 &&
				str[i - 1] == ' ')
				str[i - 1] = str[j++];

			else
				// копіювати поточний символ за індексом i
				//і збільшити як i, так і j
				str[i++] = str[j++];

			// встановити прапор пробілу на false, якщо він є
			//знайдено непробіл
			spaceFound = false;
		}
		// якщо поточний символ є пробілом
		else if (str[j++] == ' ')
		{
			//Якщо місце зустрічається для першого
			// час після слова, поставте один пробіл у
			// вивести та встановити прапор пробілу в true
			if (!spaceFound)
			{
				str[i++] = ' ';
				spaceFound = true;
			}
		}
	}

	// Видалити пробіли в кінці
	if (i <= 1)
		str.erase(str.begin() + i, str.end());
	else
		str.erase(str.begin() + i - 1, str.end());
}


int main()
{ 
	cout << " Enter the sentence" << endl;
	string str;
	getline(cin, str); 

	removeSpaces(str);

	cout << str << endl;

	system("pause");
	return 0;
}
