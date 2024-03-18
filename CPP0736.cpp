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
		int a[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		int l = 0, r = 0, ans = 1e7 + 1;
		ll sum = 0;
		while(1)
		{
			sum += a[r];
			if(sum > k)
			{
				while(sum - a[l] > k)
				{
					sum -= a[l];
					l++;
				}
				ans = min(ans, r - l + 1);
			}
			r++;
			if(r >= n)
				break;
		}
		cout << (ans == 1e7 + 1 ? -1 : ans) << endl;
	}
	return 0;
}