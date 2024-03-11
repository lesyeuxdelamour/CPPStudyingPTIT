#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	faster();
	int n, m, k, u, cnt = 0;
	cin >> n >> k >> m;
	int a[n] = {};
	for(int i = 0; i < m; ++i)
	{
		cin >> u;
		a[u - 1] = 1;
	}
	for(int i = 0; i < k; ++i)
		if(a[i])
			cnt++;
	int ans = cnt;
	for(int i = k; i < n; ++i)
	{
		cnt = cnt - a[i - k] + a[i];
		ans = min(ans, cnt);
	}
	cout << ans << endl;
	return 0;
}