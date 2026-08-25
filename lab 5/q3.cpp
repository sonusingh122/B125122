#include <iostream>
using namespace std;
// array total
int total(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

float total(float arr[], int size)
{
    float sum = 0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

int total(int arr[], int size, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float farr[] = {1.5, 2.5, 3.5, 4.5};

    cout << "Total of integer array: "
         << total(arr, 5) << endl;

    cout << "Total of floating-point array: "
         << total(farr, 4) << endl;

    cout << "Total of first 3 elements: "
         << total(arr, 5, 3) << endl;

    return 0;
}