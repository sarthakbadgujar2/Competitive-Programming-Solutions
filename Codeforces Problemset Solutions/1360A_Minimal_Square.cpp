#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long ll;
#define endl "\n"



int main()
{
	fastio;
	int t;
	cin >> t;

	while(t--)
	{
		int a,b;
		cin >> a >> b;

		if(a > b)
		{
			b = b * 2;
			if(a>b)
				cout << a*a << endl;
			else
				cout << b*b << endl;
		}
		else
		{
			a = a*2;
			if(a>b)
				cout << a*a << endl;
			else
				cout << b*b << endl;
		}
		
	}

}