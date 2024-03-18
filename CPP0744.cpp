#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll fac[21];

void dpFac()
{
	fac[0] = fac[1] = 1;
	for(int i = 2; i <= 20; ++i)
		fac[i] = i * fac[i - 1];
}

int main()
{
	faster();
	dpFac();
	int t;
	cin >> t;
	while(t--)
	{
		int n, r, g, b;
		cin >> n >> r >> g >> b;
		int m = n - r - g - b;
		ll res = 0;
		for(int i = 0; i <= m; ++i)
			for(int j = 0; j <= m - i; ++j)
			{
				int k = m - i - j;
				res += fac[n] / (fac[i + r] * fac[j + g] * fac[k + b]); // Multinomial coefficients
			}
		cout << res << endl;
	}
	return 0;
}