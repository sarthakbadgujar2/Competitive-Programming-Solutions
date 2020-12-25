#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long ll;
#define endl "\n"



int main()
{
	fastio;

	int n,k;
	cin >> n >> k;

	int scores[n];
	for(int i=0;i<n;i++)
		cin >> scores[i];


	int c = 0;

	if(scores[k-1] == 0)
	{
		for(int i=0;i<n;i++)
		{
			if(scores[i] > scores[k-1])
				c++;
		}
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(scores[i] >= scores[k-1])
				c++;
		}
	}

	cout << c;
}


