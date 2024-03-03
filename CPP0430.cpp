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
		int n, u;
		cin >> n;
		int MAX = -1e3, MIN = 1e3;
		set<int> st;
		for(int i = 0; i < n; ++i)
		{
			cin >> u;
			MAX = max(MAX, u);
			MIN = min(MIN, u);
			st.insert(u);
		}
		cout << MAX - MIN - st.size() + 1 << endl;
	}
	return 0;
}