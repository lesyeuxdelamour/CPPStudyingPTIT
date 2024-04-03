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
		int n, m, l;
		cin >> n >> m >> l;
		int u, ps[n + 1][m + 1] = {};
		for(int i = 1; i <= n; ++i)
			for(int j = 1; j <= m; ++j)
			{
				cin >> u;
				ps[i][j] = ps[i - 1][j] + ps[i][j - 1] - ps[i - 1][j - 1] + u;
			}
		int k = l / 2;
		for(int i = k + 1; i <= n - k; ++i)
		{
			for(int j = k + 1; j <= m - k; ++j)
				cout << ((ps[i + k][j + k] - ps[i + k][j - k - 1] - ps[i - k - 1][j + k] + ps[i - k - 1][j - k - 1]) / (l * l)) << " ";
			cout << endl;
		}
	}
	return 0;
}