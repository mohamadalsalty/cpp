// https://codeforces.com/problemset/problem/580/A
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool seq = false;
    int current_number;
    int cnt = 0;
    int cnt_temp = 1;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (seq == false)
        {
            seq = true;
        }
        else
        {

            if (a >= current_number)
            {
                cnt_temp++;
            }
            else
            {
                cnt_temp = 1;
            }
        }

        current_number = a;

        if (cnt_temp > cnt)
        {
            cnt = cnt_temp;
        }
    }

    cout << cnt;
    return 0;
}
