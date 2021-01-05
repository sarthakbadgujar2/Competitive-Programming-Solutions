//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long int ll;
#define endl "\n"

int main()
{
	fastio;
	int t =1;
	//cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;

		ll sum = 0;
		for(ll i =0;i<n;i++)
		{	
			string str;
			cin >> str;
			if(str == "Icosahedron")
				sum += 20;
			else if(str == "Cube")
				sum += 6;
			else if(str == "Tetrahedron")
				sum += 4;
			else if(str == "Dodecahedron")
				sum += 12;
			else if(str == "Octahedron")
				sum += 8;
		}
		cout << sum;
					
	}	
}




