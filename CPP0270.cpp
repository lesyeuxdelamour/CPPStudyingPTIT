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
		int n, m;
		cin >> n >> m;
		int a[n][m], k[3][3];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
				cin >> a[i][j];
		for(int i = 0; i < 3; ++i)
			for(int j = 0; j < 3; ++j)
				cin >> k[i][j];
    	ll sum = 0;
		for(int i = 0; i < n - 2; ++i)
			for(int j = 0; j < m - 2; ++j)
				for(int i1 = 0; i1 < 3; ++i1)
					for(int j1 = 0; j1 < 3; ++j1)
						sum += a[i + i1][j + j1] * k[i1][j1];
		cout << sum << endl;
	}
	return 0;
}