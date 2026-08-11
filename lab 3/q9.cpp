#include <iostream>
#include <string>
using namespace std;

class Product
{
    int productID;
    string productName;
    double price;
    int quantity;

public:
    void accept()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void display()
    {
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Cost: " << price * quantity << endl;
    }

    double getCost()
    {
        return price * quantity;
    }
};

int main()
{
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    Product *products = new Product[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Product " << i + 1 << endl;
        products[i].accept();
    }

    cout << "\nShopping Cart Details\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nProduct " << i + 1 << endl;
        products[i].display();
    }

    double total = 0;

    for (int i = 0; i < n; i++)
    {
        total += products[i].getCost();
    }

    cout << "\nTotal Amount: " << total << endl;

    delete[] products;

    return 0;
}