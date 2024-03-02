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
		vector<int> v(n + 1);
		for(int i = 1; i <= n; ++i)
		{
			cin >> u;
			v[i] = v[i - 1] + u;
		}
		int l, r;
		for(int i = 0; i < k; ++i)
		{
			cin >> l >> r;
			cout << v[r] - v[l - 1] << endl;
		}
	}
	return 0;
}