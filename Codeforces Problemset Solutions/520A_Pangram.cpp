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
	int t =1;
	//cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		string str;
		cin >> str;

	    transform(str.begin(), str.end(), str.begin(), ::tolower); 

		set<char> distinct;
		for(char x : str)
			distinct.insert(x);
		if(distinct.size()==26)
			cout << "YES";
		else
			cout << "NO";

	}	
}




