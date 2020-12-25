#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long ll;

int main()
{
	fastio;

    int n;
    cin >> n;

    ll count = 0;
    for(ll i=5;i<=n;i=i*5)
    {
    	count += n/i;
    }

    cout << count;
    
}

