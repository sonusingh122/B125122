#include <iostream>
using namespace std;
// display data of int , float , int arr, and char arr
void show(int a)
{
    cout << "Integer: " << a << endl;
}

void show(float a)
{
    cout << "Float: " << a << endl;
}

void show(char a)
{
    cout << "Character: " << a << endl;
}

void show(int arr[], int size)
{
    cout << "Integer array: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

void show(char arr[], int size)
{
    cout << "Character array: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int a = 10;
    float b = 20.5;
    char c = 'A';

    int arr[] = {10, 20, 30, 40, 50};
    char carr[] = {'H', 'e', 'l', 'l', 'o'};

    show(a);
    show(b);
    show(c);
    show(arr, 5);
    show(carr, 5);

    return 0;
}