#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

vector<ll> divisor(2e6 + 1);

void sieve()
{
	divisor[1] = 1;
	for(ll i = 2; i <= 2e6; ++i)
		if(divisor[i] == 0)
		{
			divisor[i] = i;
			for(ll j = i * i; j <= 2e6; j += i)
				if(divisor[j] == 0)
					divisor[j] = i;
		}
}

int main()
{
	faster();
	sieve();
	int t;
	cin >> t;
	ll sum = 0;
	while(t--)
	{
		ll n;
		cin >> n;
		while(n != 1)
		{
			sum += divisor[n];
			n /= divisor[n];
		}
	}
	cout << sum;
	return 0;
}