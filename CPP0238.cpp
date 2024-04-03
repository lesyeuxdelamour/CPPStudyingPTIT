#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

void dfs(char a[21][21], int i, int j, int n, int m)
{
	a[i][j] = '*';
	for(int k = 0; k < 4; ++k)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 'O')
			dfs(a, i1, j1, n, m);
	}
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		char a[21][21];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
				cin >> a[i][j];
		for(int i = 0; i < n; ++i)
		{
			if(a[i][0] == 'O')
				dfs(a, i, 0, n, m);
			if(a[i][m - 1] == 'O')
				dfs(a, i, m - 1, n, m);
		}
		for(int j = 0; j < m; ++j)
		{
			if(a[0][j] == 'O')
				dfs(a, 0, j, n, m);
			if(a[n - 1][j] == 'O')
				dfs(a, n - 1, j, n, m);
		}
		for(int i = 0; i < n; ++i)
		{
			for(int j = 0; j < m; ++j)
				if(a[i][j] == '*')
					cout << 'O' << " ";
				else
					cout << 'X' << " ";
			cout << endl;
		}
	}	
	return 0;
}