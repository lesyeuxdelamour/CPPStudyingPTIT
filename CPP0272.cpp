#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll powMOD(ll x, ll n)
{
	ll p = 1;
	for(int i = 0; i < n; ++i)
		p = (p * (x % MOD)) % MOD;
	return p;
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<ll> v(n);
		for(auto &x : v)
			cin >> x;
	 	ll h = v[0], g = v[0];
		for(int i = 1; i < n; ++i)
		{
			h = (h * (v[i] % MOD)) % MOD;
			g = __gcd(g, v[i]);
		}
		ll res = powMOD(h, g);
		cout << res << endl;
	}
	return 0;
}