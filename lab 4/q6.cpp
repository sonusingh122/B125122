#include <iostream>
using namespace std;
class Door
{
private:
    int doorNumber;
    bool lockStatus;

public:
    Door(int n, bool l)
    {
        doorNumber = n;
        lockStatus = l;
    }
    friend class SecuritySystem;
};
class SecuritySystem
{
public:
    void check(Door d)
    {
        cout << "door number" << d.doorNumber << endl;
        if (d.lockStatus)
            cout << "Locked";
        else
            cout << "Unlocked";
    }
};
int main()
{
    Door d1(1, true);
    SecuritySystem s;
    s.check(d1);
    return 0;
}