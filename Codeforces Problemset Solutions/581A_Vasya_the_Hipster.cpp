#include<bits/stdc++.h>
#include<iostream>
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
        int red,blue;
        cin >> red >> blue;

       if(red >=blue)
       {
           red -=blue;
           red /= 2;
           cout << blue << " " << red;
       }
       else
       {
           blue -= red;
           blue /=2;
           cout << red << " " << blue;
       }
       
    }
}