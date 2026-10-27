#include <iostream>
using namespace std;

class IrrigationSystem
{
public:
    virtual void calculateWater(double moisture)
    {
        cout << "Water calculation" << endl;
    }
};

class DripIrrigation : public IrrigationSystem
{
public:
    void calculateWater(double moisture) override
    {
        double water = 2 * (100 - moisture);
        cout << "Drip Irrigation: " << water << " litres" << endl;
    }
};

class SprinklerIrrigation : public IrrigationSystem
{
public:
    void calculateWater(double moisture) override
    {
        double water = 3 * (100 - moisture);
        cout << "Sprinkler Irrigation: " << water << " litres" << endl;
    }
};

int main()
{
    DripIrrigation drip;
    SprinklerIrrigation sprinkler;

    drip.calculateWater(40);
    sprinkler.calculateWater(40);

    return 0;
}