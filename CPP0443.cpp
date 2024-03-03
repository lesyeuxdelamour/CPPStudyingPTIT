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
		map<int, int> mp;
		for(int i = 0; i < n - 1; ++i)
		{
			cin >> u;
			mp[u]++;
		}
		for(int i = 1; i <= n + 1; ++i)	
			if(mp[i] == 0)
			{
				cout << i << endl;
				break;
			}
	}
	return 0;
}