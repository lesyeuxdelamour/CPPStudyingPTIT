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
		set<int> st;
		for(int i = 0; i < n; ++i)
		{
			cin >> u;
			if(u > 0)
				st.insert(u);
		}
		int min = 0;
		for(auto x : st)
			if(x - min > 1)
				break;
			else
				min = x;
		cout << min + 1 << endl;
	}
	return 0;
}