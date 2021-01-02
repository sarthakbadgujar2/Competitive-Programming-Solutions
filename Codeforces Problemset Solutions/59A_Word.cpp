//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long ll;
#define endl "\n"


int main()
{
	fastio;

	int t = 1;
	//cin >> t;
	while(t--)
	{
		string word;
		cin >> word;

		int lcount=0;
		int ucount=0;

		for(int i=0;i<word.size();i++)
		{
			if(isupper(word[i]))
				ucount++;
			else
				lcount++;
		}

		if(ucount == lcount || lcount > ucount)
		{	
			for(int i=0;i<word.size();i++)
			{
				if(isupper(word[i]))
					putchar(tolower(word[i]));
				else
					putchar(word[i]);
			}
		}
		else if(ucount > lcount)
		{
			for(int i=0;i<word.size();i++)
			{
				if(islower(word[i]))
					putchar(toupper(word[i]));
				else
					putchar(word[i]);
			}
		} 

	}

}


