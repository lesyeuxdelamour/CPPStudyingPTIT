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
		ll n, k;
		cin >> n >> k;
		n %= k;
		ll sum = n * (n + 1) / 2;
		if(sum == k)
			cout << "1\n";
		else
			cout << "0\n";
	}
	return 0;
}