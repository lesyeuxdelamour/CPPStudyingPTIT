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
		int row = 0, col = 0, x = n, y = m;
		while(row < n - 1 && col < m - 1)
		{
			int pre = a[row + 1][col];
			for(int i = col; i < m; ++i)
				swap(pre, a[row][i]);
			row++;
			for(int i = row; i < n; ++i)
				swap(pre, a[i][m - 1]);
			m--;
			if(row < n)
			{
				for(int i = m - 1; i >= col; --i)
					swap(pre, a[n - 1][i]);
				n--;
			}
			if(col < m)
			{
				for(int i = n - 1; i >= row; --i)
					swap(pre, a[i][col]);
				col++;
			}
		}
		for(int i = 0; i < x; ++i)
			for(int j = 0; j < y; ++j)
				cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}