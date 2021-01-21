#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long ll;
#define endl "\n"



int main()
{
	fastio;

	int n;
	cin >> n;

	int k;

	int police = 0;
	int crime = 0;
	for(int i=0;i<n;i++)
	{
		cin >> k;
		 if(k > 0)
		 	police += k;
		 else
		 {
		 	if(police > 0)
		 		police--;
		 	else
		 		crime++;
		 }
		
	}
	cout << crime << endl;
}