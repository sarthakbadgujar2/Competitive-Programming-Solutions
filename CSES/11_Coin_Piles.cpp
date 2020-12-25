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
    	ll a, b;
    	cin >> a >> b;

    	if(a<b)
    		swap(a,b);
    	if((2*b)<a)
    		cout << "NO" <<endl;
    	else
    	{
    		if((a+b)%3==0)
    			cout << "YES" <<endl;
    		else
    			cout << "NO" <<endl;
    	}
    }
    
}

