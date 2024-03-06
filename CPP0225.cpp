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
		int n, sumAll = 0;
		cin >> n;
		int a[n][n], sumRow[n] = {}, sumCol[n] = {};
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++j)
			{
				cin >> a[i][j];
				sumRow[i] += a[i][j];
				sumCol[j] += a[i][j];
				sumAll += a[i][j];
			}
		sort(sumRow, sumRow + n, greater<int>());
		sort(sumCol, sumCol + n, greater<int>());
		int sumMax = max(sumRow[0], sumCol[0]);
		cout << sumMax * n - sumAll << endl;
	}
	return 0;
}