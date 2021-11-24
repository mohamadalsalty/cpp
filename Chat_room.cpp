// https://codeforces.com/problemset/problem/58/A
#include <iostream>
using namespace std;


int main()
{
	string word;
	cin >> word;
	string needed = "hello";
	int looking_for = 0;

	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] == needed[looking_for])
		{
			looking_for++;
		}
	}

	if (looking_for == 5)
	{
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}