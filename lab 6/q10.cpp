#include <iostream>
using namespace std;
void searchContact(int *contacts, int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (*contacts == target)
        {
            cout << "Contact found at position: " << i << endl;
            return;
        }
        contacts++;
    }
    cout << "Contact not found." << endl;
}
int main()
{
    int contactCount;
    cout << "\nEnter number of contacts: ";
    cin >> contactCount;
    int *contacts = new int[contactCount];
    cout << "Enter contact numbers: ";
    for (int i = 0; i < contactCount; i++)
        cin >> *(contacts + i);
    int target;
    cout << "Enter contact number to search: ";
    cin >> target;
    searchContact(contacts, contactCount, target);
    delete[] contacts;
    return 0;
}
