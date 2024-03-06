#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	faster();
	int n, m;
	cin >> n;
	int a[n][n];
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < n; ++j)
			cin >> a[i][j];
	cin >> m;
	int b[m][m];
	for(int i = 0; i < m; ++i)
		for(int j = 0; j < m; ++j)
			cin >> b[i][j];
	for(int i = 0; i < n; i += m)
		for(int j = 0; j < n; j += m)
			for(int x = 0; x < m; ++x)
				for(int y = 0; y < m; ++y)
					a[i + x][j + y] *= b[x][y];
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
			cout << a[i][j] << " ";
		cout << endl;	
	}
	return 0;
}