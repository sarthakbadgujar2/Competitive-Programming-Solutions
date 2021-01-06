//#include<bits/stdc++.h>
#include<iostream>
// #include<string>
#include<vector>
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
		ll no;
		cin >> no;

		int arr[] = {1, 5, 10, 20, 100};

		ll res = 0;
		for(int i=4;i>=0;i--)
		{
			res = res + no/arr[i];
			no = no%arr[i];
		}
		cout << res;
	}	
}




