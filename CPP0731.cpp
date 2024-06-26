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
		int pre = 0, cur = 0, ans = 0;
		int a[n];
		for(int i = 0; i < n; ++i)
		{
			cin >> a[i];
			if(i > pre)
			{
				ans++;
				pre = cur;
			}
			cur = max(cur, i + a[i]);
		}
		cout << ans << endl;
	}
	return 0;
}