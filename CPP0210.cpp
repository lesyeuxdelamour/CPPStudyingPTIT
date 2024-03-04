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
		for(auto &x : a)
			cin >> x;
		int min_val = a[0], res = -1e5;
		for(int i = 0; i < n; ++i)
		{
			if(a[i] > min_val)
				res = max(res, a[i] - min_val);
			min_val = min(min_val, a[i]);
		}
		if(res == -1e5)
			cout << "-1\n";
		else
			cout << res << endl;
	}
	return 0;
}