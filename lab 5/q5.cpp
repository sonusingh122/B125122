#include <iostream>
using namespace std;
// modify a value of int , float and using pointer
void modify(int &a, int value)
{
    a = a + value;
}

void modify(float &a, float value)
{
    a = a + value;
}

void modify(int *a, int value)
{
    *a += value;
}

int main()
{
    int a = 10;
    float b = 10.5;
    int c = 20;

    cout << "Integer before: " << a << endl;
    modify(a, 5);
    cout << "Integer after: " << a << endl;

    cout << "Float before: " << b << endl;
    modify(b, 5.5);
    cout << "Float after: " << b << endl;

    cout << "Pointer integer before: " << c << endl;
    modify(&c, 10);
    cout << "Pointer integer after: " << c << endl;

    return 0;
}