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
		ll u;
		map<ll, int> mp;
		for(int i = 0; i < n; ++i)
		{
			cin >> u;
			mp[u]++;
		}
		for(int i = 0; i < n; ++i)
			if(mp[i])
				cout << i << " ";
			else
				cout << -1 << " ";
		cout << endl;
	}
	return 0;
}