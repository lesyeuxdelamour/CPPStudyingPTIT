#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	faster();
	int n, m, p;
	cin >> n >> m >> p;
	int a[n][m], b[m][p], ab[n][p] = {};
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < m; ++j)
			cin >> a[i][j];
	for(int i = 0; i < m; ++i)
		for(int j = 0; j < p; ++j)
			cin >> b[i][j];
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < p; ++j)
			for(int k = 0; k < m; ++k)
				ab[i][j] += a[i][k] * b[k][j];
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < p; ++j)
			cout << ab[i][j] << " ";
		cout << endl;
	}
	return 0;
}