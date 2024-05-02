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
		string s1, s2;
		cin >> s1 >> s2;
		int d1[256] = {}, d2[256] = {};
		for(int i = 0; i < s2.size(); ++i)
			d2[s2[i]]++;
		int cnt = 0, ans = s1.size() + 1, idx = -1, k = 0;
		for(int i = 0; i < s1.size(); ++i)
		{
			d1[s1[i]]++;
			if(d1[s1[i]] <= d2[s1[i]])
				cnt++;
			if(cnt == s2.size())
			{
				while(d1[s1[k]] > d2[s1[k]])
				{
					d1[s1[k]]--;
					k++;
				}
				if(ans > i - k + 1)
				{
					idx = k;
					ans = i - k + 1;
				}		
			}
		}
		if(idx != -1)
			cout << s1.substr(idx, ans);
		else
			cout << -1;
		cout << endl;
	}
	return 0;
}