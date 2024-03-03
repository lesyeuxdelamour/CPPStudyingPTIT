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
		map<char, int> mp;
		for(auto x : s)
			mp[x]++;
		int ans = s.size();
		for(auto x : mp)
			ans += x.second * (x.second - 1) / 2; // T? h?p ch?p 2 c?a x.second
		cout << ans << endl;
	}
	return 0;
}