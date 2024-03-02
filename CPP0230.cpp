#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	faster();
	int n;
	cin >> n;
	int a[n][3];
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < 3; ++j)
			cin >> a[i][j];
	int ans = 0;
	for(int i = 0; i < n; ++i)
	{
		int cnt = 0;
		for(int j = 0; j < 3; ++j)
			if(a[i][j])
				cnt++;
		if(cnt > 1)
			ans++;
	}
	cout << ans;
	return 0;
}