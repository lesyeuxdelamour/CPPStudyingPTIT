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
		int l = 0, u = 0;
		for(int i = 0; i < n; ++i)
		{
			cin >> a[i];
			if(a[i] <= k)
				l++;
		}
		for(int i = 0; i < l; ++i)
			if(a[i] > k)
				u++;
		int ans = u;
		for(int i = 0, j = l; i < n - l, j < n; ++i, ++j)
		{
			if(a[i] > k)
				u--;
			if(a[j] > k)
				u++;
			ans = min(ans, u);
		}
		cout << ans << endl;
	}
	return 0;
}