#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int employeeID;
    string employeeName;
    double basicSalary;
    double *monthlyEarnings;
    int months;

public:
    void accept()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter Number of Months: ";
        cin >> months;

        monthlyEarnings = new double[months];

        cout << "Enter monthly earnings:" << endl;

        for (int i = 0; i < months; i++)
        {
            cout << "Month " << i + 1 << ": ";
            cin >> monthlyEarnings[i];
        }
    }

    void display()
    {
        double total = 0;
        double highest = monthlyEarnings[0];
        int highestMonth = 1;

        cout << "\nEmployee Details" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;

        cout << "\nMonthly Earnings:" << endl;

        for (int i = 0; i < months; i++)
        {
            cout << "Month " << i + 1 << ": "
                 << monthlyEarnings[i] << endl;

            total += monthlyEarnings[i];

            if (monthlyEarnings[i] > highest)
            {
                highest = monthlyEarnings[i];
                highestMonth = i + 1;
            }
        }

        double average = total / months;

        cout << "\nTotal Earnings: " << total << endl;
        cout << "Average Monthly Earning: " << average << endl;
        cout << "Highest Earning: " << highest << endl;
        cout << "Highest Earning Month: " << highestMonth << endl;
    }

    ~Employee()
    {
        delete[] monthlyEarnings;
    }
};

int main()
{
    Employee employee;

    employee.accept();
    employee.display();

    return 0;
}