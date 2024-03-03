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
			st.insert(u);
		}
		if(st.size() == 1)
			cout << -1;
		else
		{
			int cnt = 2;
			for(set<int>::iterator itr = st.begin(); itr != st.end(), cnt > 0; ++itr, cnt--)
				cout << *itr << " ";
		}
		cout << endl;
	}
	return 0;
}