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
		int n, m, k;
		cin >> n >> m >> k;
		ll a[n], b[m], c[k];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		for(int i = 0; i < m; ++i)
			cin >> b[i];
		for(int i = 0; i < k; ++i)
			cin >> c[i];
		vector<ll> v;
		int x = 0, y = 0, z = 0;
		while(x < n && y < m && z < k)
		{
			if(a[x] == b[y] && b[y] == c[z])
			{
				v.push_back(a[x]);
				x++;
				y++;
				z++;
			}
			if(a[x] < b[y])
				x++;
			if(b[y] < c[z])
				y++;
			if(c[z] < a[x])
				z++;				
		}
		if(v.size() == 0)
			cout << -1;
		for(int i = 0; i < v.size(); ++i)
			cout << v[i] << " ";
		cout << endl;
	}
	return 0;
}