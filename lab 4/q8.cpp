#include <iostream>
using namespace std;

class TicketChecker;

class TrainSeat
{
    int seatNo;
    string passenger;
    bool booked;

public:
    TrainSeat(int s, string p, bool b)
    {
        seatNo = s;
        passenger = p;
        booked = b;
    }

    friend class TicketChecker;
};

class TicketChecker
{
public:
    void display(TrainSeat t)
    {
        cout << "Seat Number: " << t.seatNo << endl;
        cout << "Passenger Name: " << t.passenger << endl;

        if (t.booked)
        {
            cout << "Status: Booked" << endl;
            cout << "Passenger: " << t.passenger << endl;
        }
        else
            cout << "Status: Available" << endl;
    }
};

int main()
{
    TrainSeat t(25, "Rahul", true);
    TicketChecker c;

    c.display(t);

    return 0;
}