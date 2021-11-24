#include <iostream>
using namespace std;


int main()
{
	int n; // Number need to be processed
	int k; // Times the number have to be processed
	cin >> n >> k;


	for (int i = 1; i < k + 1; i++)
	{
		if (n % 10 != 0)
		{
			n = n - 1;
		}
		else
		{
			n = n / 10;
		}
	}

	cout << n;

	return 0;

}