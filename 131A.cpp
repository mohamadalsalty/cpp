// https://codeforces.com/problemset/problem/131/A
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;
int main()
{
    string word;
    cin >> word;
    bool all_uppercase = all_of(word.begin(), word.end(), ::isupper);
    bool all_but_first_uppercase = islower(word[0]) &&
                                   (all_of(word.begin() + 1, word.end(), ::isupper) || word.size() == 0);

    if (all_uppercase || all_but_first_uppercase)
    {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        if (all_but_first_uppercase)
        {
            word[0] = toupper(word[0]);
        }
    }

    cout << word;
    return 0;
}
