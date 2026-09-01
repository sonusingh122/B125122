#include <iostream>
using namespace std;
void marksUpdater(int *p, int n)
{
    cout << "marks before:\n";
    for (int i = 0; i < n; i++)
    {
        cout << *p << endl;
        p++;
    }
    p = p - 5;
    cout << "after modification:" << endl;
    for (int i = 0; i < n; i++)
    {
        *p += 5;
        cout << *p << endl;
        p++;
    }
}
int main()
{
    int marks[5] = {80, 50, 40, 100};
    int *ptr = marks;
    marksUpdater(marks, 5);
    return 0;
}