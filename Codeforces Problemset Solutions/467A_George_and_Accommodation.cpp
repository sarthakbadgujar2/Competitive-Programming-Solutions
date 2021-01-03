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
		int count = 0;
		int rooms;
		cin >> rooms;
		while(rooms--)
		{
			int p,q;
			cin >> p >> q;

			if(p<=q)
			{
				if((q-p) >= 2)
					count++;
			}
		}

		cout << count;
	}

}




