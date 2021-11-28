// https://codeforces.com/problemset/problem/136/A
#include <iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;

	int p[n + 200];

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp; // 2
		p[temp - 1] = i + 1; // p[1] = 1
	}

	for (int i = 0; i < n; i++)
	{
		cout << p[i] << " ";
	}
}