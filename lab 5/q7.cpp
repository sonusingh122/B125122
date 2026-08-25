#include <iostream>
using namespace std;
// compare int , float , two arr that they have same element or not
int compare(int a, int b)
{
    return (a > b) ? a : b;
}

float compare(float a, float b)
{
    return (a > b) ? a : b;
}

bool compare(int a[], int b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

int main()
{
    int a = 10, b = 20;
    float x = 15.5, y = 12.5;

    int arr1[] = {10, 20, 30, 40};
    int arr2[] = {10, 20, 30, 40};

    cout << "Larger integer: " << compare(a, b) << endl;
    cout << "Larger floating-point number: " << compare(x, y) << endl;

    if (compare(arr1, arr2, 4))
        cout << "Both arrays contain identical elements" << endl;
    else
        cout << "Arrays do not contain identical elements" << endl;

    return 0;
}