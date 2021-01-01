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
		ll k,n,w;
		cin >> k >> n >> w;

		ll total_dollars = 0;
		for(ll i =1;i<=w;i++)
		{
			total_dollars += (i * k);
		}

		((total_dollars-n) <= 0) ? cout << "0" : cout <<(total_dollars-n);
	}

}


