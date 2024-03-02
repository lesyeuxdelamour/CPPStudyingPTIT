#include <bits/stdc++.h>
#define endl "\n"
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
		int ans = 0;
		for(int i = 0; i < n - 1; ++i)
			for(int j = n - 1; j > i; --j)
			{
				if(j - i <= ans)
					break;
				if(a[i] <= a[j])
					ans = max(j - i, ans);
			}
		cout << ans << endl;
	}
	return 0;
}