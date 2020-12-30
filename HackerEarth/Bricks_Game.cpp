#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long ll;
#define endl "\n"

int main()
{
	fastio;

	ll N;
	cin >> N;

	ll i = 1;
	ll patlu_sum = 0,motu_sum=0,res = 0;

	while(true)
	{
		patlu_sum = i;
		motu_sum = i * 2;
		if((res+patlu_sum) >= N)
		{
			cout << "Patlu";
			break;
		}
		else
		{
			res = res + patlu_sum;
		}
		if((res + motu_sum) >= N)
		{
			cout << "Motu";
			break;
		}
		else
		{
			res = res + motu_sum;
		}

		i++;

	}

}


