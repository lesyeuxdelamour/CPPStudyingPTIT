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
		int n, k, cnt = 0;
		cin >> n >> k;
		int a[n];
		map<ll, int> mp;
		for(int i = 0; i < n; ++i)
		{
			cin >> a[i];
			mp[a[i]]++;
		}
		for(int i = 0; i < n; ++i)
			if(mp[k - a[i]])
			{
				cnt += mp[k - a[i]];
				if(a[i] == k - a[i])
					cnt -= 1;
			}
		cout << cnt / 2 << endl;
	}
	return 0;
}