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
		int n, u, ans = -1;
		cin >> n;
		map<int, int> mp;
		for(int i = 0; i < n; ++i)
		{
			cin >> u;
			mp[u]++;
			if(ans == -1 && mp[u] == 2)
				ans = u;
		}
		cout << ans << endl;
	}
	return 0;
}