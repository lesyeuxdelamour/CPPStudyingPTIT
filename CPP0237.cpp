#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool check(char a[21][21], int x, int y, int k)
{
	for(int i = x; i < x + k; ++i)
		if(a[i][y] == 'O' || a[i][y + k - 1] == 'O')
			return 0;
	for(int j = y; j < y + k; ++j)
		if(a[x][j] == 'O' || a[x + k - 1][j] == 'O')
			return 0;
	return 1; 
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		char a[21][21];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++j)
				cin >> a[i][j];
		int flag = 0;
		for(int k = n; k > 0; --k)
			for(int i = 0; i <= n - k; ++i)
				for(int j = 0; j <= n - k; ++j)
					if(check(a, i, j, k))
					{
						flag = k;
						goto out;
					}	
		out:
		cout << flag << endl;
	}
	return 0;
}