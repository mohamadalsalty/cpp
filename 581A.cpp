// https://codeforces.com/problemset/problem/581/A
#include <iostream>

using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    cout << min(a, b) << endl;

    cout << (max(a, b) - min(a, b)) / 2 << endl;

    return 0;
}
