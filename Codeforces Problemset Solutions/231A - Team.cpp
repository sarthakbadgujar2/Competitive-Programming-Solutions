#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long ll;
#define endl "\n"



int main()
{
	fastio;

	int t;
	cin >> t;

	int count = 0,n;

	while(t--)
	{
		int sum =0;
		for(int i=0;i<3;i++)
		{
			cin >> n;
			sum += n;
		}
		if(sum >=2)
			count ++;
	}
	cout << count;
}

