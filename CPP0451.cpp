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
		int n, m, k;
		cin >> n;
		vector<int> v(n);
		for(int i = 0; i < n; ++i)
			cin >> v[i];
		cin >> k >> m;
		int pos = lower_bound(v.begin(), v.end(), m) - v.begin();
		int l = pos - 1, r = pos + 1;
		if(v[pos] != m)
			r--;
		for(int i = l - k / 2 + 1; i < l + 1; ++i)
			cout << v[i] << " ";
		for(int i = r; i < r + k / 2; ++i)
			cout << v[i] << " ";
		cout << endl;
	}
	return 0;
}