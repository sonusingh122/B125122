#include <iostream>
using namespace std;

class HomeController; // forward declaration

class SmartDevice
{
    string name, type;
    bool power;

public:
    SmartDevice(string n, string t, bool p)
    {
        name = n;
        type = t;
        power = p;
    }

    friend class HomeController;
};

class HomeController
{
public:
    void display(SmartDevice d)
    {
        cout << "Device Name: " << d.name << endl;
        cout << "Device Type: " << d.type << endl;
    }

    void turnOn(SmartDevice &d)
    {
        d.power = true;
        cout << "Device turned ON" << endl;
    }

    void turnOff(SmartDevice &d)
    {
        d.power = false;
        cout << "Device turned OFF" << endl;
    }

    void status(SmartDevice d)
    {
        if (d.power)
            cout << "Power Status: ON" << endl;
        else
            cout << "Power Status: OFF" << endl;
    }
};

int main()
{
    SmartDevice d("Fan", "Electric Fan", false);
    HomeController h;

    h.display(d);
    h.status(d);

    h.turnOn(d);
    h.status(d);

    h.turnOff(d);
    h.status(d);

    return 0;
}