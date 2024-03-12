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
		int n;
		cin >> n;
		ll dp[n];
		cin >> dp[0];
		ll u, ans = dp[0];
		for(int i = 1; i < n; ++i)
		{
			cin >> u;
			dp[i] = max(dp[i - 1] + u, u);
			ans = max(ans, dp[i]);
		}
		cout << ans << endl;
	}
	return 0;
}