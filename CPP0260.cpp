#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	faster();
	int n;
	cin >> n;
	int a[n * n], tmp[n][n];
	for(int i = 0; i < n * n; ++i)
		cin >> a[i];
	sort(a, a + n * n);
	int cnt = 0;
	int row = 0, col = 0, m = n, size = n;
	while(row < n && col < m)
	{
		for(int i = col; i < m; ++i)
			tmp[row][i] = a[cnt++];
		row++;
		for(int i = row; i < n; ++i)
			tmp[i][m - 1] = a[cnt++];
		m--;
		if(row < n)
		{
			for(int i = m - 1; i >= col; --i)
				tmp[n - 1][i] = a[cnt++];
			n--;
		}
		if(col < m)
		{
			for(int i = n - 1; i >= row; --i)
				tmp[i][col] = a[cnt++];
			col++;
		}
	}
	for(int i = 0; i < size; ++i)
	{
		for(int j = 0; j < size; ++j)
			cout << tmp[i][j] << " ";
		cout << endl;
	}
	return 0;
}