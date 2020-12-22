#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long ll;
#define endl "\n"
 
int main()
{
	fastio;

	string s;
	cin >> s;
 
    int f[26]={0};
    vector<char> even,odd;
    
    int c = 0;

    for(int i=0;i<s.size();i++)
    	f[s[i]-65]++;

    for (int i=0;i<26;i++)
    {
    	if(f[i]%2 !=0)
    		c++;
    }
   
    if(c > 1)
    	cout << "NO SOLUTION";
    else
    {
    	
    	for(int i=0;i < 26;i++)
    	{
    		if(f[i]%2!=0)
    		{
    			while(f[i]--)
    				odd.push_back(i+65);
    		}
    		else if(f[i]>0 && f[i]%2==0)
    		{
    			int temp = f[i]/2;
    			while(temp--)
    				even.push_back(i+65);
    		}
    	}
    }

    for(char elem : even)
    	cout << elem;
    for(char elem : odd)
    	cout << elem;
    reverse(even.begin(),even.end());
    for(char elem : even)
    	cout << elem;

    
}

