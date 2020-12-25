#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll n;
	cin >> n;

	vector<ll> vect;
	
	for(ll i=1;i<=n;i++)
	{
		vect.push_back(i);
	}

	if(n==2 || n==3)
	{
		cout << "NO SOLUTION";
	}
	else
	{
		for(ll i=0;i<n;i++)
		{
			if(vect[i]%2==0)
				cout << vect[i] << " ";
		}

		for(ll i=0;i<n;i++)
		{
			if(vect[i]%2!=0)
				cout << vect[i] << " ";
		}
	}

}

