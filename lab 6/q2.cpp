#include <iostream>
using namespace std;
int main()
{

    int waterLevel = 500;
    int *pWater = &waterLevel;

    cout << "\nCurrent water level: " << *pWater << " L" << endl;

    *pWater += 200;
    *pWater -= 100;

    cout << "Final water level:" << *pWater << "L" << endl;
}