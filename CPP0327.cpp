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
		int ans = 0;
		for(auto x : s)
			ans = (ans * 2 + x - '0') % 5;
		cout << (ans % 5 == 0 ? "Yes\n" : "No\n");
	}
	return 0;
}