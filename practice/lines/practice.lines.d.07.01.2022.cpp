#include <iostream>
#include <Windows.h>
#include <cmath>
#include<string>
#include <algorithm>
using namespace std;
void removeSpaces(string& str)
{
	//n � ������� ��������� �����
	int n = str.length();

	// i  ����� �� �������� �������, ��� ������� ���������
	// �������� �����/j ����� �� ��������� ������
	// � ������������ �����
	int i = 0, j = -1;

	// �������� ������, ���� �� �������� true
	bool spaceFound = false;

	// �������� ������ ����
	while (++j < n && str[j] == ' ');

	// ��������� �� ������� ��������� �����
	while (j < n)
	{
		// ���� ������ ������� �� � �������
		if (str[j] != ' ')
		{
			//�������� �������� ������ ����� �������,
			// ���� � ���� �������
			if ((str[j] == '.' || str[j] == ',' ||
				str[j] == '?') && i - 1 >= 0 &&
				str[i - 1] == ' ')
				str[i - 1] = str[j++];

			else
				// �������� �������� ������ �� �������� i
				//� �������� �� i, ��� � j
				str[i++] = str[j++];

			// ���������� ������ ������ �� false, ���� �� �
			//�������� �������
			spaceFound = false;
		}
		// ���� �������� ������ � �������
		else if (str[j++] == ' ')
		{
			//���� ���� ����������� ��� �������
			// ��� ���� �����, �������� ���� ����� �
			// ������� �� ���������� ������ ������ � true
			if (!spaceFound)
			{
				str[i++] = ' ';
				spaceFound = true;
			}
		}
	}

	// �������� ������ � ����
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
