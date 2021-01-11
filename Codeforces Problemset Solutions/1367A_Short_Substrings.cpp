#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
typedef long long ll;
int main()
{ 
    fastio;
    int t ;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;

        string ans = "";
        ans = ans +  (char)str[0] + (char)str[1];
        for(int i=3;i<str.size();i+=2)
            ans = ans + (char)str[i];
        cout << ans << endl;

    }
}