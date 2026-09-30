#include <iostream>
#include <string>
using namespace std;

class Product
{
    string name;
    float price;
    int quantity;

public:
    Product(string n = "", float p = 0, int q = 0)
    {
        name = n;
        price = p;
        quantity = q;
    }

    Product operator+(Product p)
    {
        if (name == p.name && price == p.price)
        {
            return Product(name, price, quantity + p.quantity);
        }

        cout << "Products cannot be combined." << endl;
        return Product();
    }

    bool operator>(Product p)
    {
        return price * quantity > p.price * p.quantity;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Value: " << price * quantity << endl;
    }
};

int main()
{
    Product p1("Pen", 10, 5);
    Product p2("Pen", 10, 8);

    Product p3 = p1 + p2;

    cout << "Combined Product:" << endl;
    p3.display();

    if (p1 > p2)
        cout << "\nProduct 1 has greater total value.";
    else if (p2 > p1)
        cout << "\nProduct 2 has greater total value.";
    else
        cout << "\nBoth products have equal total value.";

    return 0;
}