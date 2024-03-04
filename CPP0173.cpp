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
		ll x, y, z, n;
		cin >> x >> y >> z >> n;
		ll ans = x * y / __gcd(x, y);
		ans = ans * z / __gcd(ans, z);
		ll l = (ll)pow(10, n - 1);
		ll r = (ll)pow(10, n);
		if(ans >= r)
			cout << "-1\n";
		else
		{
		    ll tmp = l % ans;
			if(tmp == 0)
				cout << l << endl;
			else
				cout << l + ans - tmp << endl;
		}
	}
	return 0;
}