#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int Kadane(int a[], int n)
{
	int sum = 0, res = -1e9;
	for(int i = 0; i < n; ++i)
	{
		sum += a[i];
		res = max(res, sum);
		sum = max(0, sum);
	}
	return res;
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		int n, m, ans = -1e9;
		cin >> n >> m;
		int a[n][m];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
				cin >> a[i][j];
		for(int l = 0; l < m; ++l)
		{
			int tmp[n] = {};
			for(int r = l; r < m; ++r)
			{
				for(int i = 0; i < n; ++i)
					tmp[i] += a[i][r];
				ans = max(ans, Kadane(tmp, n));
			}
		}			
		cout << ans << endl;
	}
	return 0;
}