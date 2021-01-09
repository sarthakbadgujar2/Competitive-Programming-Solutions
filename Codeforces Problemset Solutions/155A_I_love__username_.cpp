#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
typedef long long ll;



int main()
{ 
    fastio;
    int t =1;
    //cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n;

        vector<int> vect;

        for(int i=1;i<=n;i++)
        {
            cin >> k;
            vect.push_back(k);
        }

       	int max = vect[0];
       	int min = vect[0];
       	int count = 0;
       	for(int i=0;i<n;i++)
       	{
       		if(vect[i] > max)
       		{
       			max = vect[i];
       			count++;
       		}
       		if(vect[i] < min)
       		{
       			min = vect[i];
       			count++;
       		}
       	}
        cout << count;
        
    }
}