#include <bits/stdc++.h>
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);

const int MOD = 1e9 + 7;

using namespace std;
using ll = long long;

ll MODexponentiation(ll a, ll b)
{
	if(b == 0)
		return 1LL;
	ll half = MODexponentiation(a, b / 2LL);
	if(b & 1)
		return (((half * half) % MOD) * (a % MOD)) % MOD;
	return (half * half) % MOD;
}

ll inverseMOD(ll a)
{
	return MODexponentiation(a, MOD - 2);
}

ll catalan(ll n)
{
	ll x = 1, y = 1;
	for(int i = n + 2; i <= 2 * n; ++i)
		x = (x * i) % MOD;
	for(int i = 1; i <= n; ++i)
		y = (y * i) % MOD;
	y = inverseMOD(y);
	return (x * y) % MOD;
}

int main()
{
	faster();
	ll n;
	cin >> n;
	if(n == 0 || n == 2)
		cout << 1;
	else
		cout << catalan(n / 2);
	return 0;
}