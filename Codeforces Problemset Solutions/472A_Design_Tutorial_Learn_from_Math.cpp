#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
typedef long long ll;

bool check(int no)
{
    for(int i=2;i<=no/2;i++)
        if(no%i==0)
            return true;
    return false;
}
int main()
{ 
    fastio;
    int t=1;
    //cin >> t;
    while(t--)
    {
        int no;
        cin >> no;

        for(int i=4;i<no-3;i++)
        {
            int n1,n2;
            n1 = no - i;
            n2 = i;
            if(check(n1) && check(n2))
            {
                cout << n1 << " " << n2;
                break;
            }
        }
        
    }
}