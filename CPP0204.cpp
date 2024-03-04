#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

vector<bool> prime(1000001, 1);
vector<int> pos(1000001, 0);

void sieve()
{
	prime[0] = prime[1] = pos[0] = pos[1] = 0;
	for(ll i = 2; i <= 1000000; ++i)
	{
		if(prime[i])
			for(ll j = i * i; j <= 1000000; j += i)
				prime[j] = 0;
		pos[i] = pos[i - 1] + prime[i];
	}
}

int main()
{
	faster();
	sieve();
	int t;
	cin >> t;
	while(t--)
	{
		int l, r;
		cin >> l >> r;
		cout << pos[r] - pos[l - 1] << endl;
	}
	return 0;
}