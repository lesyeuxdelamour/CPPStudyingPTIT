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
		int a[3] = {};
		for(int i = 0; i < n; ++i)
		{
			cin >> u;
			a[u]++;
		}
		for(int i = 0; i < a[0]; ++i)
			cout << 0 << " ";
		for(int i = 0; i < a[1]; ++i)
			cout << 1 << " ";
		for(int i = 0; i < a[2]; ++i)
			cout << 2 << " ";
		cout << endl;
	}
	return 0;
}