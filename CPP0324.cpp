#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll remain(string s, ll m)
{
	ll r = 0;
	for(auto x : s)
		r = (r * 10 + (x - '0') % m) % m;
	return r;
}

ll powRemain(ll a, ll b, ll m)
{
	if(b == 1)
		return a;
	ll x = powRemain(a, b / 2, m);
	if(b & 1)
		return a * ((x * x) % m) % m;
	else
		return x * x % m;
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		ll a, b, m;
		cin >> s >> b >> m;
		a = remain(s, m);
		cout << powRemain(a, b, m) << endl;
	}
	return 0;
}