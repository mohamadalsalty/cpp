#include <iostream>
using namespace std;


int main() {
	int steps_needed;
	int steps_done = 0;
	int one = 5;
	int counter = 0;

	cin >> steps_needed;
	while (steps_done != steps_needed)
	{
		
		if (steps_done < steps_needed)
		{
			if (one + steps_done <= steps_needed)
			{
				steps_done += one;
				counter++;
			}
			else
			{
				one = one - 1;
			}
		}
	}


	cout << counter << "\n";


    return 0;
}
