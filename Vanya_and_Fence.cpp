// https://codeforces.com/problemset/problem/677/A
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n,h,w;
	cin >> n >> h;
	int a[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] > h)
		{
			w = w + 2;
		}
		else
		{
			w = w + 1;
		}
	}

	cout << w;



}