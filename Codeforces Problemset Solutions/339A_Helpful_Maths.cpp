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

	int l = str.size();

	for(int i=0;i<l;i+=2)
		for(int j=0;j<l;j +=2)
			if(str[i] < str[j])
				swap(str[i],str[j]);
	cout << str;
}


