#include<bits/stdc++.h>
using namespace std;


int main()
{
	string s;
	cin >> s;

	int len = s.length();
	int raw_count = 0;
	int count = 0;

	for(int i=0;i<len-1;i++)
	{
		if(s[i]==s[i+1])
		{
			raw_count++;
		}
		else
		{
			count = max(count,raw_count);
			raw_count = 0;
		}
	}

	count = max(count,raw_count);

	cout<<count+1;
}
