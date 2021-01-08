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
		 int n,m,i,j;
		 cin >> n >> m;
	    for(i=1; i<=n; i++)
    	{
        	if(i%4==2)
        	{
            	for(j=1; j<m; j++)
            	{
                	printf(".");
            	}
            	printf("#\n");
        	}
        	else if(i%4==0)
        	{
            	printf("#");
            	for(j=1; j<m; j++)
            	{
                	printf(".");
            	}
            	printf("\n");
        	}
        	else
        	{
            	for(j=1; j<=m; j++)
            	{
                	printf("#");
            	}
            	printf("\n");
        	}
        }
   
	}	
}




