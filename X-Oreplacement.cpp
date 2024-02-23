#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;
using ll = long long;

pair<int, int> path[4] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

void dfs(char a[21][21], int i, int j, int n, int m) 
{
	a[i][j] = '*';
	for(int k = 0; k < 4; ++k)
	{
		int i1 = i + path[k].first;
		int j1 = j + path[k].second;
		if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 'O')
			dfs(a, i1, j1, n, m	);
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
		char a[21][21];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
				cin >> a[i][j];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
				if(i == 0 || i == n - 1 || j == 0 || j == m - 1)
					if(a[i][j] == 'O')
						dfs(a, i, j, n, m);
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