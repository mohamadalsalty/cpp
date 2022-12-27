// https://codeforces.com/problemset/problem/25/A
#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int idxO;    // index of odd
    int idxE;    // index of even
    int cnt = 0; // even numbers counter

    for (int i = 0; i < n; i++)
    { // O(N)
        int x;
        cin >> x;

        if (x % 2 == 0)
        { // O(1)
            // if the number is even add the index of it and increase the counter
            cnt++;
            idxE = i + 1;
        }
        else
        {
            idxO = i + 1;
        }
    }

    if (cnt >= 2)
    { // O(1)
        cout << idxO;
    }
    else
    { // O(1)
        cout << idxE;
    }
    
    
    return 0;
}
