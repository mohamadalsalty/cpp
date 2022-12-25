// https://codeforces.com/problemset/problem/268/A
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n], y[n];
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x[j] == y[i])
            {
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}
