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
		int n, k;
		cin >> n >> k;
		pair<int, int> a[n];
		for(int i = 0; i < n; ++i)
		{
			cin >> a[i].first;
			a[i].second = abs(a[i].first - k);
		}
		stable_sort(a, a + n, [](pair<int, int> x, pair<int, int> y)
			{
				return x.second < y.second;
			}
			);
		for(int i = 0; i < n; ++i)
			cout << a[i].first << " ";
		cout << endl;
	}
	return 0;
}