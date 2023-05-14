// https://codeforces.com/problemset/problem/1335/A
#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n % 2 == 0 && n > 2)
        {
            cout << (n / 2) - 1 << endl;
        }
        else if (n <= 2)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (n / 2) << endl;
        }
    }

    return 0;
}
