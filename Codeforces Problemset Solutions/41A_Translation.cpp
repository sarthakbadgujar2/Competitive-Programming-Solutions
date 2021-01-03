// #include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
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
		string s1,s2;
		cin >> s1 >> s2;		

		reverse(s1.begin(),s1.end());

		if(s1 == s2)
			cout << "YES";
		else
			cout << "NO";
		
	}

}


