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

		int arr[no];
		for(int i=0;i<no;i++)
			cin >> arr[i];

		int res[no];
		for(int i=0;i<no;i++)
		{
			int x = arr[i];
			res[x-1] = i+1;
		}

		for(int i=0;i<no;i++)
			cout << res[i] << " ";
	}

}




