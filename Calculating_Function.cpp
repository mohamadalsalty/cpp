// https://codeforces.com/problemset/problem/486/A
#include <iostream>
using namespace std;


int main()
{
	long long n, t;
	cin >> n;

	if (n % 2 == 0) t = n / 2;
	else t = ((n + 1) / 2) * -1;

	cout << t;
	return 0;
}