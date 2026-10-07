#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;
        cout << "Person constructor" << endl;
    }
};

class Employee : public Person
{
protected:
    int employeeID;

public:
    Employee(string n, int a, int id)
        : Person(n, a)
    {
        employeeID = id;
        cout << "Employee constructor" << endl;
    }
};

class Manager : public Employee
{
private:
    string department;

public:
    Manager(string n, int a, int id, string dept)
        : Employee(n, a, id)
    {
        department = dept;
        cout << "Manager constructor" << endl;
    }

    void display()
    {
        cout << "\nEmployee Information" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Department: " << department << endl;
    }
};

int main()
{
    Manager m("Sonu", 20, 1001, "CSE");

    m.display();

    return 0;
}