#include <iostream>
using namespace std;

class Robot
{
public:
    virtual void move(double distance)
    {
        cout << "Robot is moving." << endl;
    }
};

class WheeledRobot : public Robot
{
public:
    void move(double distance) override
    {
        double time = distance / 2.0;
        cout << "Wheeled Robot Time: " << time << " seconds" << endl;
    }
};

class TrackedRobot : public Robot
{
public:
    void move(double distance) override
    {
        double time = distance / 1.2;
        cout << "Tracked Robot Time: " << time << " seconds" << endl;
    }
};

int main()
{

    WheeledRobot wheeled;
    TrackedRobot tracked;

    Robot *r1 = &wheeled;
    Robot *r2 = &tracked;

    r1->move(10);
    r2->move(10);

    return 0;
}