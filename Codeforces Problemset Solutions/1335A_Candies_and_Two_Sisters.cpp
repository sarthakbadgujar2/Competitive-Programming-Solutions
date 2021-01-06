#include<bits/stdc++.h>
// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
// #include<set>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long int ll;
#define endl "\n"

int main()
{
	fastio;
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;

		if(n>2)
			 cout << n - (n / 2 + 1) << endl;
		else
			cout << "0" << endl;

	}	
}




