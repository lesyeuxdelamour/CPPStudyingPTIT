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
		int n, ans = 1;
		cin >> n;
		vector<int> v(n), dp(n, 1);
		for(int i = 0; i < n; ++i)
		{
			cin >> v[i];
			for(int j = 0; j < i; ++j)
				if(v[i] > v[j])
					dp[i] = max(dp[i], dp[j] + 1);
			ans = max(ans, dp[i]);
		}
		cout << ans << endl;
	}
	return 0;
}