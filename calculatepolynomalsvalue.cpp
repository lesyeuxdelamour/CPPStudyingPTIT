#include <iostream>
#include <iomanip>
#include <cmath>
#define endl "\n"
#define MOD 1000000007

using namespace std;
using ll = long long;

ll powMOD(int x, int n)
{
	ll p = 1;
	for(int i = 0; i < n; ++i)
		p = (p * (x % MOD)) % MOD;
	return p;
}

int main()
{
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