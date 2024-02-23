#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;
using ll = long long;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int a[101][101], int i, int j, int n, int m) 
{
	a[i][j] = 0;
	for(int k = 0; k < 8; ++k)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1])
			dfs(a, i1, j1, n, m);
	}
}

int main() 
{
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
		int cnt = 0;
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j) 
			{
				if(a[i][j]) 
				{
					dfs(a, i, j, n, m);
					cnt++;
				}
			}
		cout << cnt << endl;
	}
	return 0;
}