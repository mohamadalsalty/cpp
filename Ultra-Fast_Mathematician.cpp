// https://codeforces.com/problemset/problem/61/A
#include <iostream>
using namespace std;


int main()
{
	string x,y;
	cin >> x;
	cin >> y;
	
	for (int i = 0; i < x.length(); i++)
	{
		if (x[i] == y[i]) cout << 0;
		else cout << 1;
	}


	return 0;
}