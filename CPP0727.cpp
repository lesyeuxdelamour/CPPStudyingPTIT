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
		ll a[n], dp[n] = {};
		for(int i = 0; i < n; ++i)
			cin >> dp[i];
		dp[2] += dp[0];
		ll ans = max(dp[1], dp[2]);
		for(int i = 3; i < n; ++i)
		{
			dp[i] += max(dp[i - 2], dp[i - 3]);
			ans = max(ans, dp[i]);
		}
		cout << ans << endl;
	}
	return 0;
}