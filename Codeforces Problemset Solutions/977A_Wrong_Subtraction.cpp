#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long ll;
#define endl "\n"

int main()
{
	fastio;

	ll t = 1;
	//cin >> t;

	while(t--)
	{
		ll number, n;
		cin >> number >> n;

		for(int i=0;i<n;i++)
		{
			if((number%10)==0)
			{
				number = number/10;
			}
			else
			{
				number = number - 1;
			}
		}

		cout << number;
	}

}


