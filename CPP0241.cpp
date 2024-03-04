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
		int a[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		int l = 0, r = n - 1, cnt = 0;
		while(l < r)
		{
			if(a[l] < a[r])
			{
				a[l + 1] += a[l];
				l++;
				cnt++;
			}
			else if(a[l] > a[r])
			{
				a[r - 1] += a[r];
				r--;
				cnt++;
			}
			else
			{
				l++;
				r--;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}