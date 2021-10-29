#include <iostream>
using namespace std;


int main() {
	int pages[10] = {1,2,3,4,5,6,7,8,9,10};
	int target = 9;
	int L = 0, R = 10, counter = 0;
	while (L <= R)
	{
		int mid = L + (R - L) / 2;
		if (pages[mid] == target)
		{
			cout << mid;
			break;
		}
		else if (pages[mid] < target)
		{
			L = mid + 1;
		}
		else {
			R = mid -1;
		}
	}

}
