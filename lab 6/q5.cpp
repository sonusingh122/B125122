#include <iostream>
using namespace std;
// Q5. Online Order Status
void updateStatus(int *status)
{
    if (*status == 1)
        *status = 2;
    else if (*status == 2)
        *status = 3;
}
int main()
{
    int status = 1;

    cout << "Q5 - Online Order Status\n";
    cout << "Before: " << status << endl;

    updateStatus(&status);

    cout << "After: " << status << endl;

    return 0;
}
