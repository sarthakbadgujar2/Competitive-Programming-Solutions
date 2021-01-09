#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
typedef long long ll;
int main()
{ 
    fastio;
    int t = 1;
    //cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;

        int mul =0,count = 0;
        for(int i=1;i<=n;i++)
        {
            mul += i*5;
            if((240-mul) >= k)
                count++;
            else
                break;
        }
        cout << count;

        
    }
}