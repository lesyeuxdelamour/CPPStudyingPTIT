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
		string s;
		int k;
		cin >> s >> k;
		int n = s.size(), ans = 0;
		for(int i = 0; i < n; ++i)
		{
			int cnt = 0, l = n, r = n;
			int dd[256] = {};
			for(int j = i; j < n; ++j)
			{
				if(dd[s[j]] == 0)
					cnt++;
				dd[s[j]]++;
				if(cnt == k)
				{
					l = j;
					break;
				}
			}
			for(int j = l + 1; j < n; ++j)
				if(dd[s[j]] == 0)
				{
					r = j;
					break;
				}
			if(l <= r)
				ans += r - l;
		}
		cout << ans << endl;
	}
	return 0;
}