#include<bits/stdc++.h>

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
		vector<int> vect;
		int w = 4, k,max = INT_MIN;
		for(int i=0;i<4;i++)
		{
			cin >> k;
			vect.push_back(k);
			if(k > max)
				max = k;
		}
		for(int x : vect)
		{
			if(max-x!=0)
				cout << max - x << " ";
		}
	}

}




