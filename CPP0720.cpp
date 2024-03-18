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
		int a[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		vector<int> l(n, 1), r(n, 1);
		for(int i = 1; i < n; ++i)
		{
			int tmp = 0;
			for(int j = 0; j < i; ++j)
				if(a[i] > a[j])
					tmp = max(tmp, l[j]);
			l[i] = tmp + 1;
		}
		for(int i = n - 2; i >= 0; --i)
		{
			int tmp = 0;
			for(int j = n - 1; j >= i; --j)
				if(a[i] > a[j])
					tmp = max(tmp, r[j]);
			r[i] = tmp + 1;
		}
		int res = 0;
		for(int i = 0; i < n; ++i)
			res = max(res, l[i] + r[i] - 1);
		cout << res << endl;
	}
	return 0;
}