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
		int dp[n][m];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
				cin >> dp[i][j];
		for(int j = 0; j < m; ++j)
			for(int i = 1; i < n; ++i)
				if(dp[i][j] == 1)
					dp[i][j] = dp[i - 1][j] + 1;
		for(int i = 0; i < n; ++i)
			sort(dp[i], dp[i] + m);
		int ans = 0;
		for(int i = 0; i < n; ++i)
			for(int j = m - 1; j >= 0; --j)
				ans = max(ans, dp[i][j] * (m - j));
		cout << ans << endl;
	}
	return 0;
}