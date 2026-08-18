#include <iostream>
using namespace std;

class GameManager;

class Player
{
    string name;
    int health, score, level;

public:
    Player(string n, int h, int s, int l)
    {
        name = n;
        health = h;
        score = s;
        level = l;
    }

    friend class GameManager;
};

class GameManager
{
public:
    void display(Player p)
    {
        cout << "Player Name: " << p.name << endl;
        cout << "Health: " << p.health << endl;
        cout << "Score: " << p.score << endl;
        cout << "Level: " << p.level << endl;
    }

    void checkAlive(Player p)
    {
        if (p.health > 0)
            cout << "Player is Alive" << endl;
        else
            cout << "Player is Dead" << endl;
    }

    void showLevelScore(Player p)
    {
        cout << "Current Level: " << p.level << endl;
        cout << "Current Score: " << p.score << endl;
    }
};

int main()
{
    Player p("Rahul", 80, 500, 5);
    GameManager g;

    g.display(p);
    cout << endl;
    g.checkAlive(p);
    cout << endl;
    g.showLevelScore(p);

    return 0;
}