// https://codeforces.com/problemset/problem/266/B
#include <iostream>
using namespace std;




int main()
{
    int n; // the number of children
    int t; // the time after which the queue will transform into the arrangement you need to find
    string s; // the queue
    cin >> n >> t >> s;
    
    while (t--)
    {
        for (int i = 1; i < n; i++)
        {
            if (s[i] == 'G' && s[i - 1] == 'B')
            {
                s[i] = 'B';
                s[i-1] = 'G';
                i++;
            }
        }
    }
    
    cout << s << endl;


}
