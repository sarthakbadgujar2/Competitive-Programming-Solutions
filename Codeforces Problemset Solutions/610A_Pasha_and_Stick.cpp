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
		ll n;
		cin >> n;

		if(n % 2 != 0)
		{
			cout << 0 << endl;
			return 0;
		}

		n = n / 2;

		if(n%2!=0)
		{
			cout << (n-1)/2 << endl;
		}
		else
			cout << (n-2)/2 << endl;
	}

}


