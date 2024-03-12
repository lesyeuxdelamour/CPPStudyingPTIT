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
		int n, k, u;
		cin >> n >> k;
		int a[n + 1] = {}, sum[n + 1] = {};
		for(int i = 1; i <= n; ++i)
		{
			cin >> a[i];
			sum[i] = sum[i - 1] + a[i];
		}
		int ans = -1e6, l, r;
		for(int i = k; i <= n; ++i)
			if(sum[i] - sum[i - k] > ans)
			{
				ans = sum[i] - sum[i - k];
				l = i - k + 1;
				r = i;
			}
		for(int i = l; i <= r; ++i)
		    cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}