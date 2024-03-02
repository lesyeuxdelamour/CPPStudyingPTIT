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
		set<char> st;
		for(auto x : s)
			st.insert(x);
		int k;
		cin >> k;
		cout << (st.size() + k >= 26 ? 1 : 0) << endl;
	}
	return 0;
}