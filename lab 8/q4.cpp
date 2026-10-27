#include <iostream>
using namespace std;

class Delivery
{
public:
    virtual void estimateTime(double distance)
    {
        cout << "Delivery time calculation" << endl;
    }
};

class BikeDelivery : public Delivery
{
public:
    void estimateTime(double distance) override
    {
        double time = (distance / 20) * 60 + 5;
        cout << "Bike Delivery Time: " << time << " minutes" << endl;
    }
};

class DroneDelivery : public Delivery
{
public:
    void estimateTime(double distance) override
    {
        double time = (distance / 40) * 60 + 2;
        cout << "Drone Delivery Time: " << time << " minutes" << endl;
    }
};

int main()
{
    BikeDelivery bike;
    DroneDelivery drone;

    bike.estimateTime(40);
    drone.estimateTime(40);

    return 0;
}