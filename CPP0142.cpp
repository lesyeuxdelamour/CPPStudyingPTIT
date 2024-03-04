#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool isPrime(int n)
{
	if(n < 2)
		return 0;
	if(n == 2 || n == 3)
		return 1;
	if(n % 2 == 0 || n % 3 == 0)
		return 0;
	for(int i = 5; i * i <= n; i += 2)
		if(n % i == 0 || n % (i + 2) == 0)
			return 0;
	return 1;
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		int x, cnt = 1;
		cin >> x;
		for(int i = 2; i < x; ++i)
			if(__gcd(i, x) == 1)
				cnt++;
		cout << isPrime(cnt) << endl;
	}
	return 0;
}