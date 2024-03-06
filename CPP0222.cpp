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
		int n, u;
		cin >> n;
		map<int, int> mp;
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++j)
			{
				cin >> u;
				if(mp[u] == i)
					mp[u]++;
			}
		int cnt = 0;
		for(auto x : mp)
			if(x.second == n)
				cnt++;
		cout << cnt << endl;
	}
	return 0;
}