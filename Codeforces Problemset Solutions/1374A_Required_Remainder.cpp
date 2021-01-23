#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long ll;
#define endl "\n"


int main()
{
	fastio;
	ll t;
	cin >> t;

	while(t--)
	{
		ll x,y,n;
		cin >> x >> y >> n;
		ll k = 0;

		ll a = n%x;

		if(a-y>=0)
			n = n-(a-y);
		else
			n=n-a-x+y;

		cout << n << endl;
		
	}

}