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
		map<int, int> mp;
		for(int i = 0; i < n; ++i)
		{
			cin >> u;
			mp[u]++;
		}
		if(mp[k] == 0)
			cout << "-1\n";
		else
			cout << mp[k] << endl;
	}
	return 0;
}