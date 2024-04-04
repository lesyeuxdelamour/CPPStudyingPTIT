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
		n *= 4;
		int a[n][n];
		int cnt = 1;
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++j)
				a[i][j] = cnt++;
		vector<int> v1, v2;
		int up, down, left, right;
		up = 0, down = n - 1, left = 1, right = n - 1;
		while(up <= down && left <= right)
		{
			for(int i = down; i >= up; --i)
				v1.push_back(a[i][right]);
			for(int i = right - 1; i >= left; --i)
				v1.push_back(a[up][i]);
			for(int i = up + 1; i <= down - 1; ++i)
				v1.push_back(a[i][left]);
			for(int i = left + 1; i <= right - 2; ++i)
				v1.push_back(a[down - 1][i]);
			up += 2; left += 2;
			down -= 2; right -= 2;
		}
		up = 0, down = n - 1, left = 0, right = n - 2;
		while(up <= down && left <= right)
		{
			for(int i = up; i <= down; ++i)
				v2.push_back(a[i][left]);
			for(int i = left + 1; i <= right; ++i)
				v2.push_back(a[down][i]);
			for(int i = down - 1; i >= up + 1; --i)
				v2.push_back(a[i][right]);
			for(int i = right - 1; i >= left + 2; --i)
				v2.push_back(a[up + 1][i]);
			up += 2; left += 2;
			down -= 2; right -= 2;
		}
		for(int i = v1.size() - 1; i >= 0; --i)
			cout << v1[i] << " ";
		cout << endl;
		for(int i = v2.size() - 1; i >= 0; --i)
			cout << v2[i] << " ";
		cout << endl;
	}
	return 0;
}