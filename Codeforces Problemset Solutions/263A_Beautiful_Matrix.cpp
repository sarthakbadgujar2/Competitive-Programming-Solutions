#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define	mod 1000000007
typedef long long ll;
#define endl "\n"


int main()
{
	fastio;

	int matrix[5][5];
	int row,col;
	int mid_row = 2,mid_col = 2;

	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin >> matrix[i][j];
			if(matrix[i][j] == 1)
				row = i,col = j;
		}
	}

	int result;
	result = abs(mid_row - row) + abs(mid_col - col);
	cout << result;
}


