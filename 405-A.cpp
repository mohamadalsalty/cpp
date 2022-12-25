// https://codeforces.com/problemset/problem/405/A
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> cubes;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        cubes.push_back(a);
    }
    sort(cubes.begin(), cubes.end());

    for (int i = 0; i < n; i++)
    {
        cout << cubes[i] << " ";
    }

    return 0;
}
