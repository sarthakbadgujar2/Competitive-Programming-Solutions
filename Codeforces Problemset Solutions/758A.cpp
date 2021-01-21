#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long ll;
#define endl "\n"



int main()
{
	fastio;

	int n,ele;
	cin >> n;

	vector<int> vect;
	int max = INT_MIN;
	for(int i=0;i<n;i++)
	{
		cin >> ele;
		vect.push_back(ele);
		if(ele > max)
			max = ele;
	}

	int elem,sum = 0;
	for(int i=0;i<n;i++)
	{
		elem = vect[i];
		sum += (max - elem);
	}

	cout << sum ;






}