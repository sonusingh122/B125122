#include <iostream>
using namespace std;
// Podcast Duration Analyzer
int findLongest(int *ptr, int n)
{
    int longest = *ptr;
    for (int i = 1; i < n; i++)
    {
        ptr++;
        if (*ptr > longest)
            longest = *ptr;
    }
    return longest;
}
int main()
{
    int podcastDuration[5] = {20, 30, 60, 10, 15};
    int *ptr = podcastDuration;
    cout << findLongest(ptr, 5);
    return 0;
}