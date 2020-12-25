#include<bits/stdc++.h>
using namespace std;


int main()
{
	long long int n;
	cin >> n;

	long int sum = 0;

	for(int i = 1;i <=n; i++ )
	{
		sum = sum + i;
	}

	long int raw_sum = 0;

	for(int i = 1;i < n;i++)
	{
		int number;
		cin >> number;

		raw_sum = raw_sum + number;
	}

	int missing_number = sum - raw_sum;
	cout << missing_number;

}