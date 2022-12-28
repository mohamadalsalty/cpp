// https://codeforces.com/problemset/problem/1367/A
#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string word;
        cin >> word;

        if (word.size() > 2)
        { // O(1)
            for (int j = 0; j < word.size(); j++) // O(1)
            {
                if (j % 2 == 0 || (j + 1) == word.size()) // O(1)
                {
                    cout << word[j];
                }
            }
        }
        else
        {
            cout << word;
        }

        cout << "\n";
    }
    return 0;
}
