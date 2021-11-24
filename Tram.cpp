// https://codeforces.com/problemset/problem/116/A
#include <iostream>
using namespace std;


int main()
{
	int n,t = 0,m = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a,b;
		cin >> a >> b;
		t = (b - a) + t;
		if (t > m)
		{
			m = t;
		}
	}

	cout << m;
}