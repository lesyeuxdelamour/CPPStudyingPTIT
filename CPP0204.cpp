#include <bits/stdc++.h>
#define endl "\n"
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
		vector<int> v(n);
		map<int, int> mp;
		for(auto x : v)
		{
			cin >> x;
			mp[x]++;
		}
		int cnt = 0;
		for(auto x : mp)
			if(x.second > 1)
				cnt += x.second;
		cout << cnt << endl;
	}
	return 0;
}