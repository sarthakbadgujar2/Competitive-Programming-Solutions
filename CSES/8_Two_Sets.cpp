#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;

    cin >> n;

    ll sum = 0;

    vector<ll> whole;
    vector<ll> v1;
    vector<ll> v2;

    for(ll i=1;i<=n;i++)
    {
    	whole.push_back(i);
    	sum += i;
    }

    if(sum%2!=0)
    {
    	cout << "NO";
    }
    else
    {
    	cout << "YES" << "\n";

    	ll temp_sum = 0;

    	for(ll i=n-1;i>=0;i--)
    	{
    		if(temp_sum + whole[i] <= sum/2)
    		{
    			v1.push_back(whole[i]);
    			temp_sum = temp_sum + whole[i];
    		}
    		else
    		{
    			v2.push_back(whole[i]);
    		}
    	}

    	cout << v1.size() << "\n";
    	for(ll x : v1)
    		cout << x << " ";
    	cout << "\n";
    	cout << v2.size() << "\n";
    	for(ll x : v2)
    		cout << x << " "; 
    }

    
}

