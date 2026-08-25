#include <iostream>
using namespace std;
// element search in int array and char array
int search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

int search(char arr[], int size, char key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

int search(int arr[], int start, int end, int key)
{
    for (int i = start; i <= end; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    char carr[] = {'a', 'b', 'c', 'd', 'e'};

    int pos1 = search(arr, 5, 30);

    if (pos1 != -1)
        cout << "Integer found at position: " << pos1 << endl;
    else
        cout << "Integer not found" << endl;

    int pos2 = search(carr, 5, 'c');

    if (pos2 != -1)
        cout << "Character found at position: " << pos2 << endl;
    else
        cout << "Character not found" << endl;

    int pos3 = search(arr, 1, 3, 40);

    if (pos3 != -1)
        cout << "Integer found in range at position: " << pos3 << endl;
    else
        cout << "Integer not found in range" << endl;

    return 0;
}