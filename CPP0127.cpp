#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

vector<bool> prime(1000001, 1);

void sieve()
{
	prime[0] = prime[1] = 0;
	for(ll i = 2; i <= 1000; ++i)
		if(prime[i])
			for(ll j = i * i; j <= 1000000; j += i)
				prime[j] = 0;
}

int main()
{
	faster();
	sieve();
	int t;
	cin >> t;
	while(t--)
	{
		int n, flag = 1;
		cin >> n;
		for(int i = 2; i <= n - 2; ++i)
			if(prime[i] && prime[n - i])
			{
				cout << i << " " << n - i << endl;
				flag = 0;
				break;
			}
		if(flag)
			cout << -1 << endl;
	}
	return 0;
}