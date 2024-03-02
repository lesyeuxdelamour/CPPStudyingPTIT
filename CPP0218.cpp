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
		int n, MIN = 1e5;
		cin >> n;
		vector<int> v(n);
		for(auto &x : v)
		{
			cin >> x;
			MIN = min(MIN, x);
		}
		int g = v[0] - MIN, cnt = 0;
		for(int i = 1; i < n; ++i)
			g = __gcd(g, v[i] - MIN);
		for(int i = 1; i <= sqrt(g); ++i)
		{
			if(g % i == 0)
				cnt += 2;
			if(i * i == g)
				cnt -= 1;
		}
		cout << cnt << endl;
	}
	return 0;
}