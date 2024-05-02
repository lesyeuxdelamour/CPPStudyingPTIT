#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int sum, ans;

void Try(int a[21][21], int i, int j, int n, int sum, int x)
{
	if(sum > x)
		return;
	if(i == n - 1 && j == n - 1 && sum == x)
		ans++;
	if(i >= 0 && i < n)
		Try(a, i + 1, j, n, sum + a[i + 1][j], x);
	if(j >= 0 && j < n)
		Try(a, i, j + 1, n, sum + a[i][j + 1], x);
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		int n, x;
		cin >> n >> x;
		int a[21][21];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++j)
				cin >> a[i][j];
		sum = 0, ans = 0;
		Try(a, 0, 0, n, a[0][0], x);
		cout << ans << endl;
	}
	return 0;
}