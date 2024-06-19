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
		int n, p, cnt = 0;
		cin >> n >> p;
		for(ll i = 1; i < min(n, p); ++i)
			if((i * i) % p == 1)
				cnt += (n - i) / p + 1;
		cout << cnt << endl;
	}
	return 0;
}
