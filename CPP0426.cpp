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
		int a[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, a + n);
		int l = 0, r = n - 1;
		while(l < r)
		{
			cout << a[r] << " " << a[l] << " ";
			l++;
			r--;
		}
		if(l == r)
			cout << a[l];
		cout << endl;
	}
	return 0;
}