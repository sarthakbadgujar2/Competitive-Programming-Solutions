//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long int ll;
#define endl "\n"

int main()
{
	fastio;
	int t =1;
	//cin >> t;
	while(t--)
	{
		int n;
		cin >> n;

		vector<int> home;
		vector<int> guest;
		for(int i = 0;i<n;i++)
		{
			int h,g;
			cin >> h >> g;

			home.push_back(h);
			guest.push_back(g);
		}

		int count = 0;
		for(int x : home)
			for(int y : guest)
				if(x==y)
					count++;
		cout << count;
					
	}	
}




