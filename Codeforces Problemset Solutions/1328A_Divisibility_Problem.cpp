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
	int t ;
	cin >> t;
	while(t--)
	{
		int a,b,count = 0;
		cin >> a >> b;

		if(a%b==0)
		{
			cout << "0" << endl; 
		}
		else
		{
			if(a > b)
			{
				int temp = a/b;
				temp = temp + 1;
				cout << (b * temp) - a << endl;
			}
			else if(b > a)
			{
				cout << (b-a) << endl;
			}
		}
	}	
}




