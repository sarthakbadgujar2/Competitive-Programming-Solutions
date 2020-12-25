#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long ll;
#define endl "\n"

int main()
{
	fastio;

	ll n;
	cin >> n;

	vector<ll> vect;
	ll sum = 0;

	for(ll i=0;i<n;i++)
	{
		ll ele;
		cin >> ele;
		vect.push_back(ele);
		sum += ele;
	}


	ll ans = LLONG_MAX;
	for(ll i = 0;i<(1<<n);i++)
	{
		ll raw_sum = 0;
		for(ll j=0;j<n;j++)
		{
			if((1<<j & i))
				raw_sum += vect[j];
		}
		ans = min(ans,abs(sum-raw_sum-raw_sum));
	}
	cout << ans;
}

