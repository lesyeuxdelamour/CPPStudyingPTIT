#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int a[1001][1001];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int d[1001][1001];

bool bfs(int a[1001][1001], int x, int y, int u, int v, int n, int m)
{
	if(x == u && y == v)
		return 1;
	memset(d, 0, sizeof(d));
	queue<pair<int, int>> q;
	q.push({x, y});
	a[x][y] = 0;
	d[x][y] = 0;
	while(!q.empty())
	{
		pair<int, int> top = q.front();
		q.pop();
		for(int k = 0; k < 4; ++k)
		{
			int i1 = top.first + dx[k];
			int j1 = top.second + dy[k];
			if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1])
			{
				d[i1][j1] = d[top.first][top.second] + 1;
				if(i1 == u && j1 == v)
					return 1;
				q.push({i1, j1});
				a[i1][j1] = 0;
			}
		}
	}
	return 0;	
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		int n, m, x, y, u, v;
		cin >> n >> m >> x >> y >> u >> v;
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
				cin >> a[i][j];
		if(a[x][y] && a[u][v] && bfs(a, x, y, u, v, n, m))
			cout << d[u][v];
		else
			cout << -1;
		cout << endl;
	}
	return 0;
}