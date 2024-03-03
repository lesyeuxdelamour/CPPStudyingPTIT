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
		int n, ans = 1e7;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, a + n);
		for(int i = 0; i < n - 1; ++i)
			for(int j = i + 1; j < n; ++j)
				if(abs(a[i] + a[j]) < abs(ans))
					ans = a[i] + a[j];
		cout << ans << endl;
	}
	return 0;
}