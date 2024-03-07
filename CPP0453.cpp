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
		int n, k, u;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, a + n);
		cout << a[k - 1] << endl;
	}
	return 0;
}