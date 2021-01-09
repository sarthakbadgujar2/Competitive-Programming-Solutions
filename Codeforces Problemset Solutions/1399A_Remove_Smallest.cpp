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
        int n,k;
        cin >> n;

        vector<int> vect(n);
        
        for(int i=0;i<n;i++)
            cin >> vect[i];
    

        sort(vect.begin(),vect.end());
        bool check=true;
        for(int i=0;i<n-1;i++)
        {
            if(abs(vect[i]-vect[i+1]) <= 1)
                check = true;
            else
            {
                check = false;
                break;
            }
        }
        if(check == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
}