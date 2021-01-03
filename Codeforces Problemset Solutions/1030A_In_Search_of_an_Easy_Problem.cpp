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
		int no;
		cin >> no;

		int count = 0;
		while(no--)
		{
			int n;
			cin >>n;
			if(n==1)
				count++;
		}

		if(count ==0)
			cout << "EASY";
		else
			cout << "HARD";


	}	

}




