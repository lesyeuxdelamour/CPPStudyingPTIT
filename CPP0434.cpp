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
		vector<ll> v(n);
		for(int i = 0; i < n; ++i)
			cin >> v[i];
		for(int i = 0; i < n; ++i)
			if(i == 0)
				cout << v[i] * v[i + 1] << " ";
			else if(i == n - 1)
				cout << v[i] * v[i - 1] << " ";
			else
				cout << v[i - 1] * v[i + 1] << " ";
		cout << endl;
	}
	return 0;
}