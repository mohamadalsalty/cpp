// https://codeforces.com/problemset/problem/133/A
#include <iostream>
using namespace std;


int main()
{
	string word;
	cin >> word;
	bool hasOutput = false;

	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] == 'H' || word[i] == 'Q' || word[i] == '9')
		{
			hasOutput = true;
		}
	}

	if (hasOutput)
	{
		cout << "YES";	
	}
	else
	{
		cout << "NO";
	}
}