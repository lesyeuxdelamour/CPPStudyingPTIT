#include <iostream>
#include <iomanip>
#include <algorithm>
#define endl "\n"
#define MOD 1000000007

using namespace std;
using ll = long long;

ll powMod(int x, int n)
{
	ll p = 1;
	for(int i = 0; i < n; ++i)
		p = (p * (x % MOD)) % MOD;
	return p;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		ll a[n];
		for(auto &x : a)
			cin >> x;
		ll h = a[0], g = a[0];
		for(int i = 1; i < n; ++i)
		{
			h = ((h % MOD) * (a[i] % MOD)) % MOD;
			g = __gcd(g, a[i]);
		}
		ll res = powMod(h, g);
		cout << res << endl;
	}
	return 0;
}