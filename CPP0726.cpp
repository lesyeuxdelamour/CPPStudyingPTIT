#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll mulMod(ll a, ll b, ll m)
{
	if(b == 0)
		return 0;
	ll tmp = mulMod(a, b / 2, m);
	tmp = (2 * tmp) % m;
	if(b & 1)
		tmp += a;
	return tmp % m;
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{ 
		ll a, b, m;
		cin >> a >> b >> m;
		cout << mulMod(a, b, m) << endl;
	}
	return 0;
}