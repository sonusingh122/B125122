#include <iostream>
using namespace std;

class FoodOrder
{
    int orderId, quantity;
    string food;
    float price;

public:
    FoodOrder(int id, string f, int q, float p)
    {
        orderId = id;
        food = f;
        quantity = q;
        price = p;
    }

    friend void calculateBill(FoodOrder o);
};

void calculateBill(FoodOrder o)
{
    float bill = o.quantity * o.price;

    cout << "Order ID: " << o.orderId << endl;
    cout << "Food Item: " << o.food << endl;
    cout << "Quantity: " << o.quantity << endl;
    cout << "Price: " << o.price << endl;
    cout << "Total Bill: " << bill << endl;
}

int main()
{
    FoodOrder o(101, "Pizza", 2, 250);
    calculateBill(o);

    return 0;
}