// https://codeforces.com/problemset/problem/228/A
#include <iostream>
using namespace std;
 
int main()
{
    int colors[4];
    int colorsLeft = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> colors[i];
        for (int j = 0; j < i; j++)
        {
            if (colors[i] == colors[j])
            {
                colorsLeft++;
                break;
            }
        }
    }
 
    cout << colorsLeft;
 
    return 0;
}
