#include <iostream>
#include <string>
using namespace std;

class Song
{
private:
    string songName;
    string artistName;
    float duration;

public:
    // Constructor
    Song(string song, string artist, float time)
    {
        songName = song;
        artistName = artist;
        duration = time;
    }

    // Friend function declaration
    friend void compareSongs(Song s1, Song s2);
};

// Friend function definition
void compareSongs(Song s1, Song s2)
{
    cout << "Song 1: " << s1.songName << endl;
    cout << "Artist: " << s1.artistName << endl;
    cout << "Duration: " << s1.duration << " minutes" << endl;

    cout << endl;

    cout << "Song 2: " << s2.songName << endl;
    cout << "Artist: " << s2.artistName << endl;
    cout << "Duration: " << s2.duration << " minutes" << endl;

    cout << endl;

    if (s1.duration > s2.duration)
    {
        cout << s1.songName << " is longer." << endl;
    }
    else if (s2.duration > s1.duration)
    {
        cout << s2.songName << " is longer." << endl;
    }
    else
    {
        cout << "Both songs have the same duration." << endl;
    }
}

int main()
{
    Song s1("Believer", "Imagine Dragons", 3.24);
    Song s2("Perfect", "Ed Sheeran", 4.23);

    compareSongs(s1, s2);

    return 0;
}