#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int x,n;


    for (int i = 1; i <= 5; i++)
    {
    	for (int j = 1; j <= 5; j++)
    	{
    		cin >> n;
    		if (n == 1)
    		{
    			x = abs(i - 3) + abs(j - 3);
    		}
    	}
    }
    cout << x;


    
    return 0;

}