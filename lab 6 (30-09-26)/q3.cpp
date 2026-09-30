#include <iostream>
using namespace std;

class Student
{
    string name;
    int marks;

public:
    Student(string n, int m)
    {
        name = n;
        marks = m;
    }

    bool operator>(Student s)
    {
        return marks > s.marks;
    }

    void display()
    {
        cout << name << " " << marks << endl;
    }
};

int main()
{
    Student s1("Sonu", 85);
    Student s2("Rahul", 78);

    if (s1 > s2)
        cout << "Sonu has higher marks";
    else
        cout << "Rahul has higher marks";

    return 0;
}