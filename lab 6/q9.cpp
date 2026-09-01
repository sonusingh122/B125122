#include <iostream>
using namespace std;

void findSmallest(int *tables, int n)
{
    int smallest = *tables;
    for (int i = 1; i < n; i++)
    {
        tables++;
        if (*tables < smallest)
            smallest = *tables;
    }
    cout << "Smallest table number:" << smallest << endl;
}
int main()
{
    int tableCount;
    cout << "\nEnter number of tables: ";
    cin >> tableCount;
    int *tables = new int[tableCount];
    cout << "Enter table numbers: ";
    for (int i = 0; i < tableCount; i++)
        cin >> *(tables + i);
    findSmallest(tables, tableCount);
    delete[] tables;
}