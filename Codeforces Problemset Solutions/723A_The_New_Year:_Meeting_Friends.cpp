#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
typedef long long ll;
int main()
{ 
    fastio;
    int t=3,k;
    int max = INT_MIN,min=INT_MAX;

    while(t--)
    {
        cin >> k;
        if(k > max)
            max = k;
        if(k < min)
            min = k;
    }
    cout << (max - min);

}