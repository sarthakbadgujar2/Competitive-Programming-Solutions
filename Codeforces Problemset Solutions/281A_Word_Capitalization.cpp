#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long ll;
#define endl "\n"


int main()
{
	fastio;

	string str;
	cin >> str;

	for(int i=0;i<str.size();i++)
	{
		if(i==0)
			putchar(toupper(str[i]));
		else
			putchar(str[i]);
	}
}


