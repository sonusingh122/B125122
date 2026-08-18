#include <iostream>
#include <string>
using namespace std;

class ParkingSlot
{
private:
    int slotNumber;
    string vehicleNumber;
    bool occupancyStatus;

public:
    // Constructor
    ParkingSlot(int slot, string vehicle, bool status)
    {
        slotNumber = slot;
        vehicleNumber = vehicle;
        occupancyStatus = status;
    }

    // Friend function declaration
    friend void checkSlot(ParkingSlot p);
};

// Friend function definition
void checkSlot(ParkingSlot p)
{
    cout << "Parking Slot Details:" << endl;
    cout << "Slot Number: " << p.slotNumber << endl;

    if (p.occupancyStatus)
    {
        cout << "Status: Occupied" << endl;
        cout << "Vehicle Number: " << p.vehicleNumber << endl;
    }
    else
    {
        cout << "Status: Available" << endl;
    }
}

int main()
{
    ParkingSlot p(10, "BR01AB1234", true);

    checkSlot(p);

    return 0;
}