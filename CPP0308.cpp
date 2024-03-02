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
		for(auto x : s)
			if(mp[x] == 1)
				cout << x;
		cout << endl;
	}
	return 0;
}