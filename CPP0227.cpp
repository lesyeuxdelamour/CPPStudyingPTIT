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
		int a[n][n];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++j)
				cin >> a[i][j];
		for(int i = 0; i < n; ++i)
		{
			if(i & 1)
				for(int j = n - 1; j >= 0; --j)
					cout << a[i][j] << " ";
			else
				for(int j = 0; j < n; ++j)
					cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}