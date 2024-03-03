#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int remainder(string s, ll n)
{
	int ans = 0;
	for(auto x : s)
		ans = (ans * 10 + x - '0') % n;
	return ans;
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		cout << !remainder(s, 11) << endl;
	}
	return 0;
}