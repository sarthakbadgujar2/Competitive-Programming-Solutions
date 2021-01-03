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
		int no,count = 0;
		cin >> no;

		string n1;
		cin >> n1;
		no--;
		while(no--)
		{
			string n;
			cin >>n;

			if(n1!=n)
				count++;

			n1 = n;

		}
		cout << count+1;
	
	}	

}




