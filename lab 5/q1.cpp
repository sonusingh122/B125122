#include <iostream>
using namespace std;
// calculator
int calculate(int a, int b)
{
    return a + b;
}

int calculate(int a, int b, int c)
{
    return a + b + c;
}

float calculate(float a, float b)
{
    return a + b;
}

int main()
{
    int a = 10, b = 20;
    cout << "Sum of two integers: " << calculate(a, b) << endl;

    int x = 10, y = 20, z = 30;
    cout << "Sum of three integers: " << calculate(x, y, z) << endl;

    float p = 10.5, q = 20.5;
    cout << "Sum of two floating-point values: " << calculate(p, q) << endl;

    return 0;
}