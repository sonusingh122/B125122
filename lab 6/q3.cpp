#include <iostream>
using namespace std;
int main()
{

    int equipment[6] = {101, 102, 103, 104, 105, 106};
    int *p = equipment;

    cout << "\nEquipment IDs and addresses:\n";

    for (int i = 0; i < 6; i++)
    {
        cout << "ID: " << *p
             << "  Address: " << p << endl;
        p++;
    }
}