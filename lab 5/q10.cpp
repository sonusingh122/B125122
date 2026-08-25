#include <iostream>
using namespace std;

int process(int a, int b)
{
    return a + b;
}

float process(int a, float b)
{
    return a + b;
}

float process(float a, float b)
{
    return a + b;
}

int process(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

int process(int *a, int *b)
{
    return *a + *b;
}

int main()
{
    int a = 10, b = 20;

    int x = 30;
    float y = 5.5;

    float p = 10.5, q = 20.5;

    int arr[] = {10, 20, 30, 40, 50};

    int m = 15, n = 25;

    cout << "Sum of two integers: "
         << process(a, b) << endl;

    cout << "Sum of integer and float: "
         << process(x, y) << endl;

    cout << "Sum of two floats: "
         << process(p, q) << endl;

    cout << "Sum of integer array: "
         << process(arr, 5) << endl;

    cout << "Sum of two integer pointers: "
         << process(&m, &n) << endl;

    return 0;
}