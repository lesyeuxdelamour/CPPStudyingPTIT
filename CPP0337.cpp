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
		int n = 0;
		int dd[256] = {}, d[256] = {};
		for(int i = 0; i < s.size(); ++i)
			if(!dd[s[i]])
			{
			    dd[s[i]] = 1;
			    n++;
			}
		int ans = n, cnt = 0, k = 0;
		for(int i = 0; i < s.size(); ++i)
		{
			d[s[i]]++;
			if(d[s[i]] == 1)
				cnt++;
			if(cnt == n)
			{
				while(d[s[k]] > 1)
				{	
					d[s[k]]--;
					k++;
				}
				ans = min(ans, i - k + 1);
			}
		}
		cout << ans << endl;
	}
	return 0;
}