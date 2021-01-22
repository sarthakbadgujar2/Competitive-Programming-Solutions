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

	while(t--)
	{
		int n,k,ele;
		cin >> n >> k;

		int a[n],b[n];

		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}

		for(int i=0;i<n;i++)
		{
			cin >> b[i];
		}
		sort(a,a+n);
		sort(b,b+n,greater<int>());

		int ans = 0;
		for(int i=0;i<n;i++)
		{
			if(i<k)
				ans += max(a[i],b[i]);
			else
				ans += a[i];
		}

		cout << ans << endl;
	}

}