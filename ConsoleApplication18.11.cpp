#include <iostream>

struct Employee
{
    short id;
    int age;
    double salary;
    void enter_info(Employee employee)
    {
        std::cout << "Enter Employee's ID" << "\n";
        std::cin >> employee.id;
        std::cout << "Enter Employee's age" << "\n";
        std::cin >> employee.age;
        std::cout << "Enter Employee's salary" << "\n";
        std::cin >> employee.salary;

    }
};


void printInformation(Employee employee)
{
    std::cout << "ID: " << employee.id << "\n";
    std::cout << "Age: " << employee.age << "\n";
    std::cout << "Salary: " << employee.salary << "\n";
}

int main()
{
    Employee john = { 21, 27, 28.45 };
    Employee james = { 22, 29, 19.29 };

    // Выводим информацию о John
    printInformation(john);

    std::cout << "\n";
    Employee n[30];
    int i;
    n[10].enter_info();
    for (int i = 0; i < 30; i++)
    {
        std::cout << "Please enter " << i + 1 << " employes's info" << '\n';
        n[i].enter_info();
    }
  
   std:: cout << std::endl;

    // Выводим информацию о James
    printInformation(james);
  /*  Employee mike;
    std::cout << "Enter Mike's ID" << "\n";
    std::cin >> mike.id;
    std::cout << "Enter Mike's age" << "\n";
    std::cin >> mike.age;
    std::cout << "Enter Mike's salary" << "\n";
    std::cin >> mike.salary;
    printInformation(mike);
    std::cout << "\n"; */

    system("pause");

    return 0;
}
