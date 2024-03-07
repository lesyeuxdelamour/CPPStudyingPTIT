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
		int n, u, flag = -1;
		cin >> n;
		int a[n];
		cin >> a[0];
		ll sumAll = a[0];
		for(int i = 1; i < n; ++i)
		{
			cin >> u;
			a[i] = a[i - 1] + u;
			sumAll += u;
		}
		for(int i = 1; i < n - 1; ++i)
			if(a[i - 1] == sumAll - a[i])
			{
				flag = i + 1;
				break;
			}
		cout << flag << endl;
	}
	return 0;
}