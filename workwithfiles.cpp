#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main() {

   /* ofstream fout("cppstudio.txt"); // создаём объект класса ofstream для записи и связываем его с файлом cppstudio.txt
    fout << "Work with files in С++"; // запись строки в файл
    fout.close(); // закрываем файл*/
    char buff[50]; // буфер промежуточного хранения считываемого из файла текста
    ifstream fin("cppstudio.txt"); // открыли файл для чтения

    fin >> buff; // считали первое слово из файла
    cout << buff << endl; // напечатали это слово

    fin.getline(buff, 50); // считали строку из файла
    fin.close(); // закрываем файл
    cout << buff << endl; // напечатали эту строку
    system("pause");
    return 0;
}
  

