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
		int n, u, k, flag = -1;
		cin >> n >> k;
		int a[n];
		unordered_set<int> u_st;
		for(int i = 0; i < n; ++i)
		{
			cin >> a[i];
			u_st.insert(a[i]);
		}
		for(int i = 0; i < n; ++i)
			if(u_st.find(a[i] + k) != u_st.end())
			{
				flag = 1;
				break;
			}
		cout << flag << endl;
	}
	return 0;
}