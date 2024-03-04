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
		int a[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		cin >> l >> r;
		int cnt = 0, flag = 1;
		for(int i = l; i < r; ++i)
		{
			if(a[i + 1] < a[i] && flag == 1)
				flag = -1;
			if(a[i + 1] > a[i] && flag == -1)
			{
				flag = 0;
				break;
			}
		}
		cout << (flag ? "Yes\n" : "No\n");
	}
	return 0;
}