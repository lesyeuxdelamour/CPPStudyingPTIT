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
		ll a[n], dp[n];
		for(int i = 0; i < n; ++i)
		{
			cin >> a[i];
			dp[i] = a[i];
		}
		ll res = dp[0];
		for(int i = 1; i < n; ++i)
			for(int j = 0; j < i; ++j)
				if(a[i] > a[j] && dp[i] < dp[j] + a[i])
				{
					dp[i] = dp[j] + a[i];
					res = max(res, dp[i]);
				}
		cout << res << endl;		
	}
	return 0;
}