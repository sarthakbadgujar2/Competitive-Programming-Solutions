#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll t;
	cin >> t;

	while(t--)
	{
		ll row, col;
		cin >> row >> col;

		ll res;

		if(row > col)
		{
			if(row%2==0)
				res = (row * row) - (col - 1);
			else
				res = ((row-1) * (row-1) + 1) + (col - 1);
		}
		else
		{
			if(col%2!=0)
				res = (col * col) - (row - 1);
			else
				res = ((col-1) * (col-1) + 1) + (row - 1);	
		}
		cout << res << "\n";
	}
}

