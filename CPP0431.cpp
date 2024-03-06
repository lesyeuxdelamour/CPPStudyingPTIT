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
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		ll cnt = 0;
		sort(a, a + n);
		for(int i = 0; i < n - 1; ++i)
			cnt += lower_bound(a + i + 1, a + n, a[i] + k) - (a + i + 1);
		cout << cnt << endl;
	}
	return 0;
}