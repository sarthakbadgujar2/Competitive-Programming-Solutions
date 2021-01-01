#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long ll;
#define endl "\n"

int main()
{
	fastio;

	ll t = 1;
	//cin >> t;

	while(t--)
	{
		string name;
		cin >> name;	

		set<char> distinct;

		for(ll i=0;i<name.size();i++)
		{
			distinct.insert(name[i]);
		}

		(distinct.size()%2==1) ? cout<< "IGNORE HIM!" : cout << "CHAT WITH HER!";
	}

}


