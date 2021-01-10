#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
typedef long long ll;
int main()
{ 
    fastio;
    int t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >> a >> b;

        ll diff = abs(a-b);
        if(diff%10==0)
            cout << diff/10 << endl;
        else
            cout << diff/10 + 1 << endl;

    }
}