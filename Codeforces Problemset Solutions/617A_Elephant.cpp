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
		int x;
		cin >> x;

		if(x<=5)
			cout << 1;
		else
		{
			int steps = 0;
			while(true)
			{
				int temp;
				temp = x/5;
				steps = steps + temp;
				if(x%5==0)
				{
					cout << steps;
					break;
				}
				else
				{
					cout << steps+1;
					break;
				}
			}
		}
	}

}


