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
		ll n,mina = INT_MAX,minb=INT_MAX,count=0;
		cin >> n;

		ll a[n],b[n];

		for(ll i=0;i<n;i++)
		{
			cin >>a[i];
			if(a[i] < mina)
				mina = a[i];

		}

		for(ll i=0;i<n;i++)
		{
			cin >> b[i];
			if(b[i] < minb)
				minb = b[i];
		}

		ll ans = 0;
		for(ll i=0;i<n;i++)
		{
			ans += max(a[i]-mina,b[i]-minb);
		}

		cout << ans << endl;	
	}

}