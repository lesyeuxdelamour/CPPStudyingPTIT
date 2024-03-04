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
		int m, n, a, b, cnt = 0;
		cin >> m >> n >> a >> b;
		for(int i = m; i <= n; ++i)
			if(i % a == 0 || i % b == 0)
				cnt++;
		cout << cnt << endl;
	}
	return 0;
}