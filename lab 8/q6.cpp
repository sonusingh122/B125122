#include <iostream>
using namespace std;

class SecurityScanner
{
public:
    virtual void scan(int threats)
    {
        cout << "Scanning..." << endl;
    }
};

class BasicScanner : public SecurityScanner
{
public:
    void scan(int threats) override
    {
        cout << "Basic Scanner:" << endl;
        cout << "Threats detected: " << threats << endl;
    }
};

class AdvancedScanner : public SecurityScanner
{
public:
    void scan(int threats) override
    {
        int remaining = threats * 0.10;

        cout << "Advanced Scanner:" << endl;
        cout << "Threats detected: " << threats << endl;
        cout << "Threats remaining: " << remaining << endl;
    }
};

int main()
{
    BasicScanner basic;
    AdvancedScanner advanced;

    basic.scan(100);
    advanced.scan(100);

    return 0;
}