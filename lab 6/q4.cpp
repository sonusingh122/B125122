#include <iostream>
using namespace std;
// Train Seat Correction
int main()
{
    int arr[8] = {101, 102, 103, 104, 105, 106, 107, 108};

    int position, newSeat;

    cout << "Before correction: ";
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nEnter position to correct (0-7): ";
    cin >> position;

    cout << "Enter corrected seat number: ";
    cin >> newSeat;

    int *ptr = arr;

    *(ptr + position) = newSeat;

    cout << "After correction: ";
    for (int i = 0; i < 8; i++)
    {
        cout << *(ptr + i) << " ";
    }

    return 0;
}
