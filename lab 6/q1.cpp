#include <iostream>
using namespace std;

int main()
{
    int battery = 50;
    int *pBattery = &battery;

    cout << "Current battery: " << *pBattery << "%" << endl;

    *pBattery += 20;

    cout << "Updated battery: " << *pBattery << "%" << endl;

    return 0;
}