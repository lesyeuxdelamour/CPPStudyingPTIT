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
		ll u, MAX = -1e8, MIN = 1e8;
		for(int i = 0; i < n; ++i)
		{
			cin >> u;
			MAX = max(MAX, u);
		}
		for(int i = 0; i < m; ++i)
		{
			cin >> u;
			MIN = min(MIN, u);
		}
		cout << MAX * MIN << endl;
	}
	return 0;
}