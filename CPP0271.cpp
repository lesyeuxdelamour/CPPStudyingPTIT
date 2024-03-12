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
		int a[n][m];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
				cin >> a[i][j];
		int k = l / 2 + 1;
		for(int i = 0; i < n - k; ++i)
		{
			for(int j = 0; j < n - k; ++j)
			{
				int tmp = 0;
				for(int i1 = 0; i1 < l; ++i1)
					for(int j1 = 0; j1 < l; ++j1)
						tmp += a[i + i1][j + j1];
				tmp = floor(tmp / (l * l));
				cout << tmp << " ";
			}
			cout << endl;
		}
	}
	return 0;
}