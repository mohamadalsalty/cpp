// https://codeforces.com/problemset/problem/271/A
#include <iostream>
using namespace std;

bool checkDigits(int y);



int main()
{
	int year;
	cin >> year;
	year = year + 1;
	while (true)
	{
		 if (checkDigits(year))
		 {
		 	cout << year;
		 	return false;
		 }
		 else
		 {
		 	year++;
		 }
	}
}



bool checkDigits(int y)
{
	while (y != 0)
	{
		int n = y % 10;
		y = y / 10; 
		int x = y;

		while (x != 0)
		{
			if (x % 10 == n)
			{
				return false;
			}
			x = x / 10;
		}
	}	

	return true;
}