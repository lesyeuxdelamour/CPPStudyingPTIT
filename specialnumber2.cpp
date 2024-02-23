#include <bits/stdc++.h>
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);

const int MOD = 1e9 + 7;

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
	faster();
	ll pow2[32];
	pow2[0] = 1;
	for(int i = 1; i < 32; ++i)
		pow2[i] = pow2[i - 1] * 2;
	int t;
	cin >> t;
	while(t--)
	{
		ll n, k, ans = 0;
		cin >> n >> k;
		int idx = 31;
		while(k)
		{
			if(k >= pow2[idx])
			{
				ans = (ans + powMod(n, idx)) % MOD;
				k -= pow2[idx];
			}
			idx--;
		}
		cout << ans << endl;
	}
	return 0;
}
