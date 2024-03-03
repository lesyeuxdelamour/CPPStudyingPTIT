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
		int n;
		cin >> n;
		string s;
		set<char> st;
		while(n--)
		{
			cin >> s;
			for(int i = 0; i < s.size(); ++i)
				st.insert(s[i]);
		}
		for(auto x : st)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}