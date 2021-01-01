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
		ll a,b;
		cin >> a >> b;

		ll count = 0;

		while(true)
		{
			if(a > b)
				break;
			else
			{
				a = a * 3;
				b = b * 2;
			}
			count++;
		}
		cout << count;
	}

}


