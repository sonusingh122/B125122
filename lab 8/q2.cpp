#include <iostream>
using namespace std;

class ParkingSlot
{
public:
    virtual void calculateFee(int hours)
    {
        cout << "Parking fee calculation." << endl;
    }
};

class TwoWheelerSlot : public ParkingSlot
{
public:
    void calculateFee(int hours) override
    {
        double fee = hours * 10;

        if (hours > 5)
        {
            fee = fee - (fee * 0.10);
        }

        cout << "Two Wheeler Parking Fee: Rs. " << fee << endl;
    }
};

class FourWheelerSlot : public ParkingSlot
{
public:
    void calculateFee(int hours) override
    {
        double fee = hours * 30;

        if (hours > 5)
        {
            fee = fee - (fee * 0.10);
        }

        cout << "Four Wheeler Parking Fee: Rs. " << fee << endl;
    }
};

int main()
{
    TwoWheelerSlot twoWheeler;
    FourWheelerSlot fourWheeler;

    twoWheeler.calculateFee(6);
    fourWheeler.calculateFee(6);

    return 0;
}