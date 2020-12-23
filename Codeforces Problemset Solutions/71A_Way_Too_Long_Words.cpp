#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long ll;
#define endl "\n"



int main()
{
	fastio;

	int t;
	cin>>t;

	while(t--)
	{
		string str;
		cin >> str;

		if(str.size() > 10)
			cout <<  str[0] <<str.size()-2 << str[str.size()-1] <<endl;
		else
			cout << str <<endl;
	}
}