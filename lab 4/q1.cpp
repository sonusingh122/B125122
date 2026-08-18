#include <iostream>
#include <string>
using namespace std;

class Diary
{
private:
    string ownerName;
    int numberOfEntries;
    string lastEntry;

public:
    // Constructor
    Diary(string name, int entries, string entry)
    {
        ownerName = name;
        numberOfEntries = entries;
        lastEntry = entry;
    }

    // Friend function declaration
    friend void displayDiary(Diary d);
};

// Friend function definition
void displayDiary(Diary d)
{
    cout << "Diary Details:" << endl;
    cout << "Owner Name: " << d.ownerName << endl;
    cout << "Number of Entries: " << d.numberOfEntries << endl;
    cout << "Last Entry: " << d.lastEntry << endl;
}

int main()
{
    Diary d("Rahul", 25, "Today I learned C++.");

    displayDiary(d);

    return 0;
}