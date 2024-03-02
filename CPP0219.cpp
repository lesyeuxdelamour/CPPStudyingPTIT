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
		int n, m;
		cin >> n >> m;
		int a[n][m], b[n][m] = {};
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
				cin >> a[i][j];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
			{
				if(a[i][j])
				{
					for(int i1 = 0; i1 < n; ++i1)
						b[i1][j] = 1;
					for(int j1 = 0; j1 < m; ++j1)
						b[i][j1] = 1;
				}
			}
		for(int i = 0; i < n; ++i)
		{
			for(int j = 0; j < m; ++j)
				cout << b[i][j] << " ";
			cout << endl;
		}
	}
	return 0;
}