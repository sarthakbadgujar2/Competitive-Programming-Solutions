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

	int x = 0;

	for(int i=0;i<n;i++)
	{
		string opr;
		cin >> opr;

		if(opr == "++X")
			++x;
		else if(opr == "X++")
			x++;
		else if(opr == "--X")
			--x;
		else if(opr == "X--")
			x--;
	}
	cout << x;
	
}


