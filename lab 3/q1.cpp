#include <iostream>
using namespace std;

int main()
{
    int num;

    int *ptr = new int;

    cout << "Enter an integer: ";
    cin >> num;

    *ptr = num;

    cout << "Value: " << *ptr << endl;

    delete ptr;
    ptr = nullptr;

    return 0;
}