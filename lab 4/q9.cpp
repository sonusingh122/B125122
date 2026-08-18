#include <iostream>
using namespace std;

class Result;

class Exam
{
    string student, subject;
    float marks, maxMarks;

public:
    Exam(string s, string sub, float m, float mm)
    {
        student = s;
        subject = sub;
        marks = m;
        maxMarks = mm;
    }

    friend class Result;
};

class Result
{
public:
    void show(Exam e)
    {
        float percentage = (e.marks / e.maxMarks) * 100;

        cout << "Student Name: " << e.student << endl;
        cout << "Subject: " << e.subject << endl;
        cout << "Marks: " << e.marks << endl;
        cout << "Maximum Marks: " << e.maxMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main()
{
    Exam e("Rahul", "OOPS", 75, 100);
    Result r;

    r.show(e);

    return 0;
}