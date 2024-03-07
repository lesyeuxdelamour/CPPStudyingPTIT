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
		vector<pair<int, int>> v;
		map<int, int> mp;
		for(int i = 0; i < n; ++i)
		{
			cin >> u;
			mp[u]++;
		}
		for(auto x : mp)
			v.push_back(make_pair(x.first, x.second));
		sort(v.begin(), v.end(), [](pair<int, int> x, pair<int, int> y)
			{
				if(x.second == y.second)
					return x.first < y.first;
				return x.second > y.second;
			}
			);
		for(int i = 0; i < v.size(); ++i)
			for(int j = 0; j < v[i].second; ++j)
				cout << v[i].first << " ";
		cout << endl;
	}
	return 0;
}