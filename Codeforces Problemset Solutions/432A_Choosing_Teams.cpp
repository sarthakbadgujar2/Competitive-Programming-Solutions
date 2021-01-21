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
	int arr[n],count = 0;

	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}

	for(int i=0;i<n;i++)
	{
		if((5-arr[i]) >= k)
			count++;
	}

	cout << count/3;

}