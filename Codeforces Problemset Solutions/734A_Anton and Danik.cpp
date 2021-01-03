//#include<bits/stdc++.h>
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
		int n;
		cin >> n;

		string str;
		cin >> str;

		int Anton = 0;
		int Danik = 0;
		for(int i=0;i<n;i++)
		{
			if(str[i]=='A')
				Anton++;
			else
				Danik++;
		}

		if(Anton == Danik)
			cout << "Friendship";
		else if(Anton > Danik)
			cout << "Anton";
		else
			cout << "Danik";
	}

}




