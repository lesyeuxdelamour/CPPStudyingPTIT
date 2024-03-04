#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool check(string s)
{
	int n = s.size() - s.size() / 2;
	map<char, int> mp;
	for(auto x : s)
		mp[x]++;
	for(auto x : mp)
		if(x.second > n)
			return 0;
	return 1;
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
		cout << check(s) << endl;
	}
	return 0;
}