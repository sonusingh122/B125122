#include <iostream>
#include <string>
using namespace std;
// Text Analyzer
void analyzeText(char *ptr)
{
    int digits = 0, alphabets = 0, spaces = 0;

    while (*ptr != '\0')
    {
        if (*ptr >= '0' && *ptr <= '9')
            digits++;
        else if ((*ptr >= 'A' && *ptr <= 'Z') ||
                 (*ptr >= 'a' && *ptr <= 'z'))
            alphabets++;
        else if (*ptr == ' ')
            spaces++;

        ptr++;
    }

    cout << "Digits: " << digits << endl;
    cout << "Alphabets: " << alphabets << endl;
    cout << "Spaces: " << spaces << endl;
}
int main()
{
    char text[] = "Hey my name is sonu and my id is 122";
    cout << "Text Analyzer";
    analyzeText(text);
    return 0;
}
