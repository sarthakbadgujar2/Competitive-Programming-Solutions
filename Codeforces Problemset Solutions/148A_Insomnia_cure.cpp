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
	int t = 1;
	//cin >> t;
	while(t--)
	{
		int k,l,m,n,d,count = 0;
		cin >> k >> l >> m >> n >> d;

		for(int i=1;i<=d;i++)
		{
			if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0)
				count++;
				
		}
		cout <<d-count;
	}	

}




