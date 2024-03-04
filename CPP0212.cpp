#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll powMOD(int x, int n)
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
		int n, x;
		cin >> n >> x;
		int a[n];
		ll sum = 0;
		for(int i = 0; i < n; ++i)
		{
			cin >> a[i];
			sum += a[i] * powMOD(x, n - i - 1);
			sum %= MOD;
		}
		cout << sum << endl;
	}
	return 0;
}