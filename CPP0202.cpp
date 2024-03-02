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
		vector<int> v(n);
		for(auto &x : v)
			cin >> x;
		sort(v.begin(), v.end());
		int ans = 1e9;
		for(int i = 1; i < n; ++i)
			ans = min(ans, v[i] - v[i - 1]);
		cout << ans << endl;
	}
	return 0;
}