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
		string no1 , no2;
		cin >> no1 >> no2;

		string res = "";

		for(int i=0;i<no1.size();i++)
		{
			if(no1[i] != no2[i])
				res = res + "1";
			else
				res = res + "0";		
		}
		cout << res;
	}	

}




