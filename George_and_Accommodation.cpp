// https://codeforces.com/problemset/problem/467/A
#include <iostream>
using namespace std;


int main()
{
	int n; // the number of rooms
	cin >> n;
	int p[n]; // people living in
	int q[n]; // the room can accommodate qi people in total
	int f = 0; // the number of rooms that can both live in 

	for (int i = 0; i < n; i++)
	{
		cin >> p[i] >> q[i];
		if (q[i] - p[i] >= 2)
		{
			f++;
		}
	}

	cout << f;
	return 0;


}