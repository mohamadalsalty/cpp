// https://codeforces.com/problemset/problem/208/A
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    getline(cin, word);
    bool hasSpace = false;
    bool isFirst = true;
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == 'W' && word[i + 1] == 'U' && word[i + 2] == 'B')
        {
            if (hasSpace == false && i != word.size() && word.size() - 3 != i && !isFirst)
            {
                cout << " ";
                hasSpace = true;
            }
            i += 2;
        }
        else
        {
            hasSpace = false;
            isFirst = false;
            cout << word[i];
        }
    }
    return 0;
}
