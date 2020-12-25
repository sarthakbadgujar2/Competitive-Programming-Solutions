#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long ll;
#define endl "\n"
set<string> set1; 

ll factorial(ll n)
{
	if(n == 1) return 1;
	return n*factorial(n-1);
}

ll no_of_permutation(string s,ll len)
{
	 ll f[26]={0};
 
	for(int i=0;i<len;i++)
    	f[s[i]-97]++;

    ll temp = 1;
     for(ll i=0;i<26;i++)
     {
     	if(f[i] > 1)
     		temp *= factorial(f[i]);
     }

     return factorial(len)/temp;
}

void permutation(string str, int j)
{
	ll len = str.length();
	if(len -1 == j)
	{
		set1.insert(str);
		return;
	}
	for(int i=j;i<len;i++)
	{
		swap(str[i],str[j]);
		permutation(str,j+1);
		swap(str[i],str[j]);
	}
}
 
int main()
{
	fastio;
 
	string s;
	cin >> s;

	ll len = s.length();

    cout << no_of_permutation(s,len) << endl;

    permutation(s,0);

    for(string elem : set1)
    	cout << elem << endl;
	
}

