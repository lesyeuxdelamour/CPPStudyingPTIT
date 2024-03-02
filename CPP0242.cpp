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
		int n, x, ans = 0;
		cin >> n;
		vector<int> v1(n + 1), v2(n + 1);
		v1[0] = v2[0] = 0;
		for(int i = 1; i <= n; ++i)
		{
			cin >> x;
			v1[i] = v1[i - 1] + x;
		}
		for(int i = 1; i <= n; ++i)
		{
			cin >> x;
			v2[i] = v2[i - 1] + x;
		}
		for(int i = 0; i <= n - 1; ++i)
			for(int j = i + ans; j <= n; ++j)
				if(v1[j] - v1[i] == v2[j] - v2[i])
					ans = max(j - i, ans);
		cout << ans << endl;
	}			
	return 0;
}