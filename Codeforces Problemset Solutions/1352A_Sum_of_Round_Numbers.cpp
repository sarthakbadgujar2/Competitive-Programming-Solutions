#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
typedef long long ll;
#define endl "\n"

int main()
{ 
    fastio;
    int t ;
    cin >> t;
    while(t--)
    {
        int no;
        cin >> no;

        int pow = 1;
        vector<int> res;
        while (no > 0)
        {
            int digit = no % 10;
            if(digit !=0)
                res.push_back(digit*pow);
            no = no / 10;
            pow = pow * 10;
        }
        cout << res.size() << endl;
        for(int x:res)
            cout << x << " ";
        cout << endl;
        
    }
}