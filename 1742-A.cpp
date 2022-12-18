// https://codeforces.com/problemset/problem/1742/A
#include <iostream>

using namespace std;

int main()
{

    int qnt;
    cin >> qnt;
    for (int i = 0; i < qnt; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == c || a + c == b || b + c == a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
