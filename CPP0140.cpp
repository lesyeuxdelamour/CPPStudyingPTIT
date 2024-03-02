#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int isPrime(int n)
{
	for(int i = 2; i <= sqrt(n); ++i)
		if(n % i == 0)
			return 0;
	return n > 1;
}	

map<ll, bool> isPerfect;

void dpPerfect()
{
	for(int i = 2; i <= 31; ++i)
		if(isPrime(i))
		{
			ll x = (ll)pow(2, i) - 1;
			if(isPrime(x))
			{
				x *= (ll)pow(2, i - 1);
				isPerfect[x] = 1;
			}
		}
}

int main()
{
	faster();
	dpPerfect();
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		cout << isPerfect[n] << endl;
	}
	return 0;
}