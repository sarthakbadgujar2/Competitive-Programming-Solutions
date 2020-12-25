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
	
	for(ll i=0;i<n;i++)
	{
		int elem;
		cin >> elem;
		vect.push_back(elem);
	}

	ll  count = 0, dif = 0;
	for(ll i = 0;i<n-1;i++)
	{
		dif = 0;
		if(vect[i+1] < vect[i])
		{
			dif = vect[i] - vect[i+1];
			vect[i+1] = vect[i];
			count += dif;
		}
	}
	cout << count;

}

