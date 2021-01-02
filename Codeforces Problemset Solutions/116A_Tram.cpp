//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long ll;
#define endl "\n"


int main()
{
	//fastio;

	int t;
	cin >> t;

	int final_total_sits = 0;
	int total_sits = 0;

	while(t--)
	{
		int a,b;
		cin >> a >> b;

		total_sits = total_sits - a;
		total_sits = total_sits + b;
	
		if(total_sits > final_total_sits)
			final_total_sits = total_sits;
	}

	cout << final_total_sits;

}


