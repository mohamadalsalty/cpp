// https://codeforces.com/problemset/problem/122/A
#include <iostream>
using namespace std;



bool isLucky(long long n);
bool isAlmostLucky(long long n);

int main()
{
	long long n;
	cin >> n;
	if(isLucky(n) || isAlmostLucky(n))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}


bool isLucky(long long n)
{
	while(n != 0)
	{
		if (n % 10 != 4 && n % 10 != 7)
		{
			return false;
		}
		n = n / 10;
	}
	return true;
}


bool isAlmostLucky(long long n)
{
	int arr[12] = {4,7,47,74,44,444,447,474,477,777,774,744};


	 for(int i = 0; i < 12; i++){

	 	if(n % arr[i] == 0){
	 		return true;
	 	}

	 }

	 return false;


}