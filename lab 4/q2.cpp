#include <iostream>
#include <string>
using namespace std;

class Mobile
{
private:
    string brand;
    string model;
    int batteryPercentage;

public:
    // Constructor
    Mobile(string b, string m, int battery)
    {
        brand = b;
        model = m;
        batteryPercentage = battery;
    }

    // Friend function declaration
    friend void checkBattery(Mobile m);
};

// Friend function definition
void checkBattery(Mobile m)
{
    cout << "Mobile Details:" << endl;
    cout << "Brand: " << m.brand << endl;
    cout << "Model: " << m.model << endl;
    cout << "Battery Percentage: " << m.batteryPercentage << "%" << endl;

    if (m.batteryPercentage < 20)
        cout << "Battery Low" << endl;
    else
        cout << "Battery Normal" << endl;
}

int main()
{
    Mobile m("Samsung", "Galaxy S24", 15);

    checkBattery(m);

    return 0;
}