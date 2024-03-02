#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		ll n, m;
		cin >> n >> m;
		ll sum = n * (n + 1) / 2;
		ll a = (sum + m) / 2;
		ll b = sum - a;
		if(a - b != m)
			cout << "No\n";
		else if(__gcd(a, b) != 1)
			cout << "No\n";
		else
			cout << "Yes\n";
	}
	return 0;
}