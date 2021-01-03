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

		

		while(true)
		{
			set<int> distinct;
			no = no + 1;
			int temp_no = no;
			while(temp_no > 0)
			{
				int rem = temp_no % 10;
				distinct.insert(rem);
				temp_no = temp_no/10;
			}

			if(distinct.size() == 4)
			{
				cout << no << endl;
				break;
			}

		}
	}

}




