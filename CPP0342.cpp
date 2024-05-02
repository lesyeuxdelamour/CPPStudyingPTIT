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
		string s, ans = "";
		cin >> s;
		ll sum = 0;
		for(int i = 0; i < s.size(); ++i)
		{
			if(isdigit(s[i]))
				sum += s[i] - '0';
			else
				ans += s[i];
		}
		sort(ans.begin(), ans.end());
		cout << ans << sum << endl;
	}
	return 0;
}