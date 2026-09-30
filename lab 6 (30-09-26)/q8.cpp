#include <iostream>
#include <string>
using namespace std;

class Item
{
    string name;
    float price;
    int quantity;

public:
    Item(string n = "", float p = 0, int q = 0)
    {
        name = n;
        price = p;
        quantity = q;
    }

    Item operator+(Item i)
    {
        if (name == i.name && price == i.price)
        {
            return Item(name, price, quantity + i.quantity);
        }

        cout << "Items are different and cannot be combined." << endl;
        return Item();
    }

    void display()
    {
        cout << "Item: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
};

int main()
{
    Item i1("Pen", 10, 5);
    Item i2("Pen", 10, 8);

    Item i3 = i1 + i2;

    cout << "Combined Item:" << endl;
    i3.display();

    return 0;
}