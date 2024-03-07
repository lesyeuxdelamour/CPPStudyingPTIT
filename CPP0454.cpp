#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll Try(ll x, ll y)
{
	ll z = x * x + y * y;
	ll sqr = sqrt(z);
	if(sqr * sqr == z)
		return sqr;
	return 0;
}

int BinarySearch(ll a[], int l, int r, ll k)
{
	while(l <= r)
	{
		int m = (l + r) / 2;
		if(a[m] == k)
			return m;
		else if(a[m] > k)
			r = m - 1;
		else
			l = m + 1;
	}
	return -1;
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		int n, flag = 0;
		cin >> n;
		ll a[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, a + n);
		for(int i = 0; i < n - 2; ++i)
			for(int j = i + 1; j < n - 1; ++j)
			{
				ll tmp = Try(a[i], a[j]);
				if(tmp && BinarySearch(a, j + 1, n - 1, tmp) != -1)
				{
					flag = 1;
					goto out;
				}
			}
		out:
		cout << (flag ? "YES\n" : "NO\n");
	}
	return 0;
}