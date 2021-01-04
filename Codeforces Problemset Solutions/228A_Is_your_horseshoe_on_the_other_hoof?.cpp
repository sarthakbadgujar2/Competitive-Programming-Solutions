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
	int t = 1;
	//cin >> t;
	while(t--)
	{
		int mas[5], e = 3;
		for (int i = 0; i < 4; i++) 
		{
			cin >> mas[i];
		}
	    sort(mas, mas + 4);
	    for (int i = 0; i < 3; i++) {
	        if (mas[i] != mas[i + 1]) {
	            e--;
	        }
	    }
	    cout << e;
	}	

}




