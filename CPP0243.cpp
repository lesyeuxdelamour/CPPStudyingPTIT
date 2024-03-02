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
		int n, m, u;
		cin >> n >> m;
		vector<int> v(m);
		map<int, int> mp;
		for(int i = 0; i < n; ++i)
		{
			cin >> u;
			mp[u]++;
		}
		for(auto x : v)
		{
			cin >> x;
			int k = mp[x];
			for(int i = 0; i < k; ++i)
				cout << x << " ";
			mp[x] = 0;	
		}
		for(auto x : mp)
			if(x.second)
				cout << x.first << " ";
		cout << endl;
	}
	return 0;
}