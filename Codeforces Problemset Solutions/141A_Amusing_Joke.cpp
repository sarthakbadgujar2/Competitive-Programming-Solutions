//#include<bits/stdc++.h>
#include<iostream>
// #include<string>
#include<vector>
// #include<algorithm>
// #include<set>
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
		string christmas,new_year,pile;

		cin >> christmas >> new_year >> pile;

		string str = christmas + new_year;

		vector<int> vect(26);
		vector<int> vect2(26);
		for(int i = 0;i<str.size();i++)
			vect[str[i]%65]++;
		for(int i = 0;i<pile.size();i++)
			vect2[pile[i]%65]++;

		if(vect == vect2)
			cout << "YES";
		else
			cout << "NO";


	}	
}




