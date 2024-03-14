#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll powRemain(ll x, ll y, ll p)
{
	if(!y)
		return 1;
	if(y & 1)
	{
		ll t = powRemain(x, y - 1, p);
		return (t * x) % p;
	}
	ll t = powRemain(x, y / 2, p);
	return (t * t) % p;
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		ll x, y, p;
		cin >> x >> y >> p;
		cout << powRemain(x, y, p) << endl;
	}
	return 0;
}