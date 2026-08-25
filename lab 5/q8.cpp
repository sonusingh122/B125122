#include <iostream>
using namespace std;
// count no of digits of number, number of elements in an arr,occurences of char in char arr
int count(int n)
{
    int digits = 0;

    if (n == 0)
        return 1;

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        digits++;
        n /= 10;
    }

    return digits;
}

int count(int arr[], int size)
{
    return size;
}

int count(char arr[], int size, char ch)
{
    int occurrences = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ch)
            occurrences++;
    }

    return occurrences;
}

int main()
{
    int n = 12345;

    int arr[] = {10, 20, 30, 40, 50};

    char carr[] = {'a', 'b', 'a', 'c', 'a', 'd'};

    cout << "Number of digits: " << count(n) << endl;

    cout << "Number of elements in integer array: "
         << count(arr, 5) << endl;

    cout << "Occurrences of 'a': "
         << count(carr, 6, 'a') << endl;

    return 0;
}