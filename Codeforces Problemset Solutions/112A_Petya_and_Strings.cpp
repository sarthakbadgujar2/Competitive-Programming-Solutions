#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long ll;
#define endl "\n"


int main()
{
	fastio;

	char s1[101],s2[101];
    cin >> s1 >> s2;
    for(int i=0;i<strlen(s1);i++)
        s1[i] = tolower(s1[i]) , s2[i] = tolower(s2[i]);
    cout << strcmp(s1,s2) << endl;
}


