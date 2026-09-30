#include <iostream>
using namespace std;

class Counter
{
    int value;

public:
    Counter(int v = 0)
    {
        value = v;
    }

    Counter operator++()
    {
        ++value;
        return *this;
    }

    Counter operator++(int)
    {
        Counter temp = *this;
        value++;
        return temp;
    }

    void display()
    {
        cout << value;
    }
};

int main()
{
    Counter c(5);

    cout << "Initial value: ";
    c.display();

    cout << "\nPrefix increment: ";
    (++c).display();

    cout << "\nPostfix increment: ";
    (c++).display();

    cout << "\nValue after postfix: ";
    c.display();

    return 0;
}