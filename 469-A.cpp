// https://codeforces.com/problemset/problem/469/A
#include <iostream>
 
using namespace std;
 
int main()
{
 
    int n;
    cin >> n;
 
    int levels[n];
    int cnt = 0;
 
    for (int i = 0; i < 2; i++)
    {
        int p;
        cin >> p;
 
        for (int j = 0; j < p; j++)
        {
            int level;
            cin >> level;
 
            bool can_be_added = true;
            for (int x = 0; x < cnt; x++)
            {
                if (level == levels[x])
                {
                    can_be_added = false;
                    break;
                }
            }
 
            if (can_be_added == true)
            {
                levels[cnt] = level;
                cnt++;
            }
        }
    }
 
    if (cnt == n)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
    return 0;
}
