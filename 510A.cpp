// https://codeforces.com/problemset/problem/510/A
#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int n, m, hcnt = 0;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    { // O(N)

        for (int j = 0; j < m; j++)
        { // O(M)
            if (i % 2 == 0)
            {
                cout << "#";
            }

            else
            {
                if (hcnt % 2 == 0)
                {
                    if (j == 0)
                    {
                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                else
                {
                    if (j == (m - 1))
                    {
                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
            }
        }

        if (i % 2 == 0)
            hcnt++;
        cout << "\n";
    }

    return 0;
}
