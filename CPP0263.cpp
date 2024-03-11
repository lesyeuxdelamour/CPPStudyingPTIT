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
	int a[n + 1][n + 1] = {}, major[n + 1][n + 1] = {}, minor[n + 1][n + 1] = {};
	for(int i = 1; i <= n; ++i)
		for(int j = 1; j <= n; ++j)
			cin >> a[i][j];
	for(int i = 1; i <= n; ++i)
		for(int j = 1; j <= n; ++j)
			if(i == 1 || j == 1)
				major[i][j] = a[i][j];
			else
				major[i][j] += a[i][j] + major[i - 1][j - 1];
	for(int i = 1; i <= n; ++i)
		for(int j = n; j >= 1; --j)
			if(i == 1 || j == n)
				minor[i][j] = a[i][j];
			else
				minor[i][j] += a[i][j] + minor[i - 1][j + 1];
	int ans = 0;
	for(int i = 1; i <= n; ++i)
		for(int j = 1; j <= n; ++j)
		{
			int tmp = min(i, j);
			int row = i - tmp, col = j - tmp;
			for(int k = 0; k < tmp; ++k)
				ans = max(ans, (major[i][j] - major[row + k][col + k]) - (minor[i][col + k + 1] - minor[row + k][j + 1]));
		}
	cout << ans << endl;
	return 0;
}