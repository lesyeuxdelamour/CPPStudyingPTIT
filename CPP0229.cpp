#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int dx[2] = {-1, 1};
int dy[2] = {1, -1};
bool visited[101][101];
int flag = 1;

void dfs(int a[101][101], int i, int j, int n, int m)
{
	cout << a[i][j] << " ";
	visited[i][j] = true;
	if(i == n - 1 && j == n - 1)
		return;
	for(int k = 0; k < 2; ++k)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < n && !visited[i1][j1])
			dfs(a, i1, j1, n, m);
	}
	if(flag)
	{
		flag = 0;
		if(i == 0 && j + 1 < n)
			dfs(a, i, j + 1, n, m);
		if(j == n - 1 && i + 1 < n)
			dfs(a, i + 1, j, n, m);
	}
	else
	{
		flag = 1;
		if(j == 0 && i + 1 < n)
			dfs(a, i + 1, j, n, m);
		if(i == n - 1 && j + 1 < n)
			dfs(a, i, j + 1, n, m);
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
		int a[101][101];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
				cin >> a[i][j];
		memset(visited, false, sizeof(visited));
		dfs(a, 0, 0, n, m);
			cout << endl;
	}
	return 0;
}