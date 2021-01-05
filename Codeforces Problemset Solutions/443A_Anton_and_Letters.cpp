#include<bits/stdc++.h>
// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
// #include<set>
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
		string str;
		getline(cin,str);
		
		set<char> distinct;
		for(int i=0;i<str.size();i++)
		{
			if(str[i] >= 97 && str[i] <= 122)
			{
				distinct.insert(str[i]);
			}
		}
		cout << distinct.size();
	}	
}




