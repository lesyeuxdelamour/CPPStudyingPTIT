#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

vector<bool> prime(1000001, 1);
vector<int> primes, pos(1000001);

void sieve()
{
	prime[0] = prime[1] = 0;
	for(ll i = 2; i <= 1000000; ++i)
	{
		if(prime[i])
		{
		    primes.push_back(i);
			for(ll j = i * i; j <= 1000000; j += i)
				prime[j] = 0;
		}
		pos[i] = primes.size() - 1;
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
		ll l, r;
		cin >> l >> r;
		int a = sqrt(l);
		int b = sqrt(r);
		cout << pos[b] - pos[a] + 1 << endl;
	}
	return 0;
}