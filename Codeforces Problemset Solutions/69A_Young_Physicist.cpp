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

	int sum_x = 0,sum_y = 0,sum_z = 0;

	while(n--)
	{
		int a,b,c;

		cin >> a;
		cin >> b;
		cin >> c;

		sum_x += a;
		sum_y += b;
		sum_z += c;
	}

	if(sum_x == 0 && sum_y == 0 && sum_z==0)
		cout << "YES";
	else
		cout << "NO";




}