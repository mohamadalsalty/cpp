#include <iostream>
using namespace std;


int main() {
	// Get x and y
	int x;
	cin >> x;
	int y[x+1];
	for(int i = 0; i < x; i++)
	{
		cin >> y[i];
	}
	int highest_points = y[0]; // Highest score
	int lowest_points = y[0]; // Lowest score
	int results; // The results
	for (int i = 1; i < x; i++)
	{		
		if (y[i] > highest_points)
		{
			highest_points = y[i];
			results++;
		}
		else if (y[i] < lowest_points)
		{
			lowest_points = y[i];
			results++;
		}
	}

	cout << results;
    return 0;
}
