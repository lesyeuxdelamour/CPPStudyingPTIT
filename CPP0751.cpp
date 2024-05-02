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
		long double a[n], b[m];
		for(int i = 0; i < n; ++i)
		{
			cin >> a[i];
			a[i] = log(a[i]) / a[i];
		}
		for(int i = 0; i < m; ++i)
		{
			cin >> b[i];
			b[i] = log(b[i]) / b[i];
		}
		int ans = 0;
		sort(a, a + n);
		for(int i = 0; i < m; ++i)
		{
			int pos = upper_bound(a, a + n, b[i]) - a;
			ans += n - pos;
		}	
		cout << ans << endl;
	}
	return 0;
}