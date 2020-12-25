#include<bits/stdc++.h>
using namespace std;
#define	mod 1000000007
typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    ll ans=1;

    for(int i=0;i<n;i++)
    {
    	ans = (ans*2)%mod;
    }

    cout << ans;
    
}

