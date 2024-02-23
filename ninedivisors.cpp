#include <bits/stdc++.h>
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);

using namespace std;
using ull = unsigned long long;

//n = p1^m1.p2^m2...pk^mk, n has (m1 + 1)(m2 + 2)...(mk + 1) divisors
//n has 9 divisors <=> n = a^8 or n = (xy)^2 with a, x, y are primes

vector<int> primes;

void sieve()
{
	bool prime[15001];
	memset(prime, true, sizeof(prime));
	prime[0] = prime[1] = false;
	for(int i = 2; i * i <= 15000; ++i)
		if(prime[i])
			for(int j = i * i; j <= 15000; j += i)
				prime[j] = false;
	for(int i = 2; i <= 15000; ++i)
		if(prime[i])
			primes.push_back(i);
}	

int main()
{
	faster();
	sieve();
	int n, cnt = 0;
	cin >> n;
	int size = primes.size();
	for(int i = 0; i < size; ++i)
	{
		ull tmp = pow(primes[i], 8);
		if(tmp <= n && tmp > 0)
			cnt++;
		for(int j = i + 1; j < size; ++j)
		{
			ull tmp2 = pow((primes[i] * primes[j]), 2);
			if(tmp2 <= n && tmp2 > 0)
				cnt++;
			else
				break;
		}
	}
	cout << cnt;
	return 0;
}