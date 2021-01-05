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
		int no,k;
		cin >> no;

		int max=INT_MIN;
		int min=INT_MAX;
		int max_index;
		int min_index;
		vector<int> vect;
		for(int i=0;i<no;i++)
		{
			cin >> k;
			vect.push_back(k);
			if(k > max)
			{
				max = k;
				max_index = i;
			}
			if(k <= min)
			{
				min = k;
				min_index = i;
			}
		}

		if(max_index > min_index)
			cout << (max_index-1) + (no - min_index) -1;
		else
			cout << (max_index-1) + (no- min_index);
	}	
}




