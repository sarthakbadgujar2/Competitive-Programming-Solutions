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
        int k,r;
        cin >> k >> r;

        int count = 1;
        while(true)
        {
            if((k*count)%10==0 || (k*count)%10 == r)
            {
                cout << count;
                break;
            }
            count++;
        }

    }
}