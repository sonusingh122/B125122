#include <iostream>
#include <cmath>
using namespace std;

class MatchFormat
{
public:
    virtual void calculateTarget(int firstInningsScore)
    {
        cout << "Target calculation" << endl;
    }
};

class T20Match : public MatchFormat
{
public:
    void calculateTarget(int firstInningsScore) override
    {
        double target = firstInningsScore +
                        firstInningsScore * 0.01;

        cout << "T20 Target: " << ceil(target) << endl;
    }
};

class ODIMatch : public MatchFormat
{
public:
    void calculateTarget(int firstInningsScore) override
    {
        double target = firstInningsScore +
                        firstInningsScore * 0.02;

        cout << "ODI Target: " << ceil(target) << endl;
    }
};

int main()
{
    T20Match t20;
    ODIMatch odi;

    t20.calculateTarget(200);
    odi.calculateTarget(200);

    return 0;
}