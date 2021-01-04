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
		ll no;
		cin >> no;

		if(no%2==0)
			cout << no/2;
		else
			cout <<(no-1)/2 - no;
	
	}	

}




