//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long ll;
#define endl "\n"


int main()
{
	fastio;

	int t = 1;
	//cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
   		int count = 0;
    	while (n != 0)
    	{
        	if (n % 10 == 4 || n % 10 == 7)
        	{
            	count += 1;
        	}
        	n /= 10;
    	}
    	if (count == 4 || count == 7)
    	{
        	cout << "YES" << endl;
    	}
    	else
    	{
       		cout << "NO" << endl;
    	}
		
	}

}


