// https://codeforces.com/problemset/problem/200/B
#include <iostream>
#include <iomanip> 
using namespace std;


int main()
{
	int n;
	double t = 0.0;
	double r = 0.0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		float x;
		cin >> x;
		t = x + t;
	}

	r = t / n;
	cout << fixed << setprecision(12) << r << endl;
	return 0;
}