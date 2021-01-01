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

		string str;
		cin >> str;

		ll count = 0;
		for(ll i = 0;i<str.size()-1;i++)
		{
			if(str[i]==str[i+1])
				count++;
		}


		cout << count << endl;
	}

}


