// https://codeforces.com/problemset/problem/427/A
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n;
    int offs = 0;   // number of available officers
    int crimes = 0; // number of crimes

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int event;
        cin >> event;

        if (event == -1)
        {
            if (offs > 0)
            {
                offs--;
            }
            else
            {
                crimes++;
            }
        }
        else
        {
            offs = offs + event;
        }
    }

    cout << crimes;

    return 0;
}
