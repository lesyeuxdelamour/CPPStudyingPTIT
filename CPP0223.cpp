#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
				cin >> a[i][j];
		int row = 0, col = 0;
		while(row < n && col < m)
		{
			for(int i = col; i < m; ++i)
				cout << a[row][i] << " ";
			row++;
			for(int i = row; i < n; ++i)
				cout << a[i][m - 1] << " ";
			m--;
			if(row < n)
			{
				for(int i = m - 1; i >= col; --i)
					cout << a[n - 1][i] << " ";
				n--;
			}
			if(col < m)
			{
				for(int i = n - 1; i >= row; --i)
					cout << a[i][col] << " ";
				col++;
			}
		}
		cout << endl;
	}	
	return 0;
}