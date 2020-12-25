#include<bits/stdc++.h>
using namespace std;


int main()
{
	long long int number;
	cin >> number;

	cout << number << " ";

	while(number > 1)
	{
		if(number%2==0)
		{
			number = number / 2;	
		}
		else
		{
			number = (number * 3) + 1;
		}
		cout << number <<" ";

	}
	
}