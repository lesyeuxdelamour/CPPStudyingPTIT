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
		int n;
		cin >> n;
		ll ans = 1;
		for(int i = 2; i <= n; ++i)
			ans = ans * i / __gcd(ans, i);
		cout << ans << endl;
	}
	return 0;
}