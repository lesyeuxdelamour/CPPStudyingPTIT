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
		int n, k, flag = -1;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		int l = 0, r = n - 1;
		while(l <= r)
		{
			int m = (l + r) / 2;
			if(a[m] == k)
			{
				flag = 1;
				break;
			}
			if(a[m] < k)
				l = m + 1;
			else
				r = m - 1;
		}
		cout << flag << endl;
	}
	return 0;
}