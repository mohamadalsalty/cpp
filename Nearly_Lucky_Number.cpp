// https://codeforces.com/problemset/problem/110/A
#include <iostream>
using namespace std;




int main()
{
	long long n;
	int counter;
	cin >> n;

	// Count the luck numbers
	while (n)
	{
		if (n % 10 == 7 || n % 10 == 4)
		{
			counter++;
		}
		n = n / 10;
	}


	// Check if the number if near lucky or not
	if (counter == 4 || counter == 7)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}


	return 0;
}
