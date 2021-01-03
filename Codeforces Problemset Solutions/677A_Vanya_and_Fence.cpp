//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
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
		int n,h;
		cin >> n >> h;

		int max_width = 0;
		while(n--)
		{
			int h1;
			cin >> h1;
			if(h1 > h)
				max_width += 2;
			else
				max_width += 1;
		}
		cout << max_width;
	}

}




