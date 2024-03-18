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

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		string s;
		cin >> n >> s;
		ll r = remain(s, n);
		cout << __gcd(n, r) << endl;
	}
	return 0;
}