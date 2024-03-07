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
		int n, l, r;
		cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; ++i)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b + n);
		for(int i = 0; i < n - 1; ++i)
			if(b[i] != a[i])
			{
				l = i + 1;
				break;
			}
		for(int i = n - 1; i > 0; --i)
			if(b[i] != a[i])
			{
				r = i + 1;
				break;
			}
		cout << l << " " << r << endl;
	}
	return 0;
}