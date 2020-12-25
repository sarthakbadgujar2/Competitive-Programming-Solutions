#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long ll;
#define endl "\n"

int main()
{
	fastio;

	int w;
	cin >> w;
	if (w>=1 && w<=100)
	{
		if (w==2) 
			printf("NO\n");
		else if (w%2==0) 
			printf("YES\n");
		else printf("NO\n");
	}
	 return 0;
}



