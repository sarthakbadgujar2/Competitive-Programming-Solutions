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
		int n,x;
		cin >> n >> x;

		string str;
		cin >> str;

		while(x--)
		{
			for(int i=0;i<n-1;i++)
			{
				if(str[i]=='B' && str[i+1]=='G')
				{
					str[i] = 'G';
					str[i+1] = 'B';
					i++;
				}
			}
		}

		cout << str;
	}

}


