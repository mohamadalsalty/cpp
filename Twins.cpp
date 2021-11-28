// https://codeforces.com/problemset/problem/160/A
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


int main()
{
	int count;
	cin >> count;
	int total;
	int coins = 0;
	int nums[count + 1];


	for (int i = 0; i < count; i++)
	{
		cin >> nums[i];
		total = total + nums[i];
	}

	sort(nums, nums + count);

	int i = 0;
	while(count--)
	{
		coins = coins + nums[count];
		i = i + 1;
		if (coins > (total / 2))
		{
			cout << i;
			break;
		}
	}

	return 0;


}