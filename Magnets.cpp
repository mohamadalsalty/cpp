// https://codeforces.com/problemset/problem/344/A
#include <iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int m[100000];
	for (int i = 0; i < n; i++)
	{
		cin >> m[i];
	}

	int temp = 0;
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		if (m[i] != temp)
		{
			temp = m[i];
			count++;
		}
	}

	cout << count << endl;

	return 0;
}