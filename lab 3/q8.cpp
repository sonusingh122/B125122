#include <iostream>
#include <string>
using namespace std;

class Student
{
    int rollNumber;
    string name;
    int subjects;
    int *marks;

public:
    void accept()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Number of Subjects: ";
        cin >> subjects;

        marks = new int[subjects];

        cout << "Enter marks: ";
        for (int i = 0; i < subjects; i++)
        {
            cin >> marks[i];
        }
    }

    void display()
    {
        int total = 0;

        cout << "\nStudent Details" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;

        cout << "Marks: ";
        for (int i = 0; i < subjects; i++)
        {
            cout << marks[i] << " ";
            total += marks[i];
        }

        double average = (double)total / subjects;

        cout << "\nTotal Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
    }

    ~Student()
    {
        delete[] marks;
    }
};

int main()
{
    Student student;

    student.accept();
    student.display();

    return 0;
}