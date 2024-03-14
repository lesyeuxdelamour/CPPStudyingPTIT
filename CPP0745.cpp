#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

vector<ll> dpFibo(1001);

void sieve()
{
	dpFibo[0] = 0;
	dpFibo[1] = dpFibo[2] = 1;
	for(int i = 2; i <= 1000; ++i)
		dpFibo[i] = (dpFibo[i - 1] % MOD + dpFibo[i - 2] % MOD) % MOD;
}

int main()
{
	faster();
	sieve();
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << dpFibo[n] << endl;
	}
	return 0;
}