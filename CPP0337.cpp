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
		cin >> s;
		int k = 0, n = s.size();
		int dd[256] = {}, d[256] = {};
		for(int i = 0; i < n; ++i)
			if(!dd[s[i]])
			{
			    dd[s[i]] = 1;
			    k++;
			}
		int ans = n, cnt = 0, l = 0;
		for(int i = 0; i < n; ++i)
		{
			d[s[i]]++;
			if(d[s[i]] == 1)
				cnt++;
			if(cnt == k)
			{
				while(d[s[l]] > 1)
				{	
					d[s[l]]--;
					l++;
				}
				ans = min(ans, i - l + 1);
			}
		}
		cout << ans << endl;
	}
	return 0;
}