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
		int n, d;
		cin >> n >> d;
		vector<int> v(n);
		for(auto &x : v)
			cin >> x;
		for(int i = d; i < n; ++i)
			cout << v[i] << " ";
		for(int i = 0; i < d; ++i)
			cout << v[i] << " ";
		cout << endl;
	}
	return 0;
}