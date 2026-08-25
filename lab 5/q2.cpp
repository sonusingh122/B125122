#include <iostream>
using namespace std;
// value comparison

int larger(int a, int b)
{
    return (a > b) ? a : b;
}

float larger(float a, float b)
{
    return (a > b) ? a : b;
}

int larger(int a, int b, int c)
{
    return max(a, max(b, c));
}

int main()
{
    int a = 10, b = 20;
    cout << "Larger of two integers: " << larger(a, b) << endl;

    float x = 10.5, y = 20.5;
    cout << "Larger of two floating-point numbers: " << larger(x, y) << endl;

    int p = 30, q = 15, r = 25;
    cout << "Larger of three integers: " << larger(p, q, r) << endl;

    return 0;
}
