#include <iostream>
using namespace std;


int main() {
	int q;
	cin >> q;
	int answers[q * 4 + 1];
	int c_a = 0;

	while(q--)
	{
		int x,y;
		cin >> x >> y;

		if (x%y == 0)
		{
			answers[c_a] = 0;
			c_a++;
		}
		else
		{
			answers[c_a] = y - (x%y);
			c_a++;
		}
	}

	for (int i = 0; i < c_a; i++)
	{
		cout << answers[i] << "\n";
	}

    return 0;
}
