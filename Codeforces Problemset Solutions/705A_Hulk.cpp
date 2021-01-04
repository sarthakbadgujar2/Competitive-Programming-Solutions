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

		string str;

		for(int i=1;i<no;i++)
		{
			if(i%2==1)
				str = str + "I hate that ";
			else
				str = str + "I love that ";
		}

		if(no%2==1)
			str = str + "I hate it ";
		else
			str = str + "I love it ";

		cout << str;

	
	}	

}




