// https://codeforces.com/problemset/problem/520/A
#include <iostream>

using namespace std;

int main()
{
    int stringLength;
    cin >> stringLength;

    bool alphabet[26] = {false};
    int count = 0;

    char c;
    for (int i = 0; i < stringLength; i++)
    {
        cin >> c;
        if (isupper(c))
        {
            c = tolower(c);
        }

        int index = c - 'a';
        if (!alphabet[index])
        {
            alphabet[index] = true;
            count++;
        }

        if (count == 26)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}
