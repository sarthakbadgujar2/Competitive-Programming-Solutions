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
		int n,k,p,q;
		cin >>n;
		set<int> levels;
		cin >> p;
		for(int i=0;i<p;i++)
		{
			cin >>k;
			levels.insert(k);
		}
		cin >>q;
		for(int i=0;i<q;i++)
		{
			cin >>k;
			levels.insert(k);
		}
		if(levels.size()==n)
			cout << "I become the guy.";
		else
			cout << "Oh, my keyboard!";
	}	

}




