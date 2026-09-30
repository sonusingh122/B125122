#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    Complex operator-(Complex c)
    {
        Complex temp;

        temp.real = real - c.real;
        temp.imag = imag - c.imag;

        return temp;
    }

    void display()
    {
        if (imag >= 0)
            cout << real << " + " << imag << "i";
        else
            cout << real << " - " << -imag << "i";
    }
};

int main()
{
    Complex c1(7, 5);
    Complex c2(3, 6);

    Complex c3 = c1 - c2;

    cout << "Result: ";
    c3.display();

    return 0;
}