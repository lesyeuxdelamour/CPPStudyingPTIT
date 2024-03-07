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
		int a[n], b[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, a + n);
		int cnt = 0;
		for(int i = 0; i < n; i += 2)
			b[i] = a[cnt++];
		for(int i = 1; i < n; i += 2)
			b[i] = a[cnt++];
		for(int i = 0; i < n; ++i)
			cout << b[i] << " ";
		cout << endl;
	}
	return 0;
}