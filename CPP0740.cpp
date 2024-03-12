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
		ll a[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		ll ans = a[0];
		for(int i = 0; i < n - 1; ++i)
		{
			ll tmp = a[i];
			for(int j = i + 1; j < n; ++j)
			{
				tmp *= a[j];
				ans = max(ans, tmp);
			}
		}
		cout << ans << endl;
	}
	return 0;
}