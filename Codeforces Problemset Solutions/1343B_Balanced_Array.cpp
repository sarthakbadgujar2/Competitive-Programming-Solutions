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
        int n;
        cin >> n;

        if(n%4!=0)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;

            int sum_even = 0,sum_odd = 0;

            for(int i=0;i<n/2;i++)
            {
                cout << 2 * (i+1) << " ";
                sum_even += 2 * (i+1);
            }
            for(int i=0;i<n/2-1;i++)
            {
                cout << 2 * (i+1)-1 << " ";
                sum_odd += 2 * (i+1)-1;
            }
            cout <<  sum_even - sum_odd << endl;
        }
    }
    return 0;
}