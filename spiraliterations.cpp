#include <iostream>
#include <iomanip>
#include <vector>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m, k;
		cin >> n >> m >> k;
		int a[n][m];
		vector<int> v;
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j)
				cin >> a[i][j];
		int row = 0, col = 0;
		while(row < n && col < m)
		{
			for(int j = col; j < m; ++j)
				v.push_back(a[row][j]);
			row++;
			m--;
			for(int i = row; i < n; ++i)
				v.push_back(a[i][m]);
			if(row < n)
			{
				n--;
				for(int j = m - 1; j >= col; --j)
					v.push_back(a[n][j]);
			}
			if(col < m)
			{
				for(int i = n - 1; i >= row; --i)
					v.push_back(a[i][col]);
				col++;
			}
		}
		cout << v[k - 1] << endl;
	}
	return 0;
}