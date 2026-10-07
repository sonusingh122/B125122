#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int rollNo;
    int marks;

public:
    Student(string n, int r, int m)
    {
        name = n;
        rollNo = r;
        marks = m;
    }

    virtual void calculateResult()
    {
        cout << "Student Result" << endl;
    }
};

class RegularStudent : public Student
{
public:
    RegularStudent(string n, int r, int m)
        : Student(n, r, m)
    {
    }

    void calculateResult() override
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total Marks: " << marks << endl;
    }
};

class ScholarshipStudent : public Student
{
public:
    ScholarshipStudent(string n, int r, int m)
        : Student(n, r, m)
    {
    }

    void calculateResult() override
    {
        int total = marks + 5;

        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Original Marks: " << marks << endl;
        cout << "Scholarship Bonus: 5" << endl;
        cout << "Final Marks: " << total << endl;
    }
};

int main()
{

    RegularStudent r("Rahul", 101, 80);

    ScholarshipStudent s("Sonu", 102, 80);

    cout << "Regular Student:" << endl;
    r.calculateResult();

    cout << "\nScholarship Student:" << endl;
    s.calculateResult();

    return 0;
}
