// https://codeforces.com/problemset/problem/546/A
#include <iostream>
using namespace std;


int main()
{
	int k; // he has to pay this for the first banana
	int w; // He wants to buy this amount of banana
	int n; // he has this money
	int a = 0; // has to pay

	cin >> k >> n >> w;

	for (int i = 1; i < w+1; i++)
	{
		int h = i * k;
		a = a + h;
	}

	if (n >= a)
	{
		cout << 0 << endl;
	} else {
		cout << a - n;
	}


	return 0;

}