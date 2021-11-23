#include <iostream>
using namespace std;


int main() {
	int n,r=0,g=0,b=0;
	// Get the number of the stones
	cin >> n;
	// Store the strings of the stones
	char s[n];
	// Get the stones
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}

	for (int i = 1; i < n; i++)
	{
		// Check if the color is in a sequence and add them to the variable
		if (s[i - 1] == s[i])
		{
			switch(s[i]) {
				case 'R':
					r++;
					break;
				case 'G':
					g++;
					break;
				case 'B':
					b++;
					break;
			}
		}
	}

	// print the sum of the sequence
	cout << r+g+b;
	
}