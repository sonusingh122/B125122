#include <iostream>
using namespace std;

int maximum(int a, int b)
{
    return (a > b) ? a : b;
}

int maximum(int *a, int *b)
{
    return (*a > *b) ? *a : *b;
}

int maximum(int *arr, int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main()
{
    int a = 10, b = 20;

    int x = 30, y = 50;

    int arr[] = {10, 45, 23, 67, 34};

    cout << "Maximum between two integers: "
         << maximum(a, b) << endl;

    cout << "Maximum between two integer pointers: "
         << maximum(&x, &y) << endl;

    cout << "Maximum in integer array: "
         << maximum(arr, 5) << endl;

    return 0;
}