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
		int a[n], b[m];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		for(int i = 0; i < m; ++i)
			cin >> b[i];
		sort(a, a + n);
		sort(b, b + m);
		vector<int> uni, inter;
		int i = 0, j = 0;
		while(i < n && j < m)
		{
			if(a[i] < b[j])
			{
				uni.push_back(a[i]);
				i++;
			}
			else if(a[i] > b[j])
			{
				uni.push_back(b[j]);
				j++;
			}
			else
			{
				uni.push_back(a[i]);
				inter.push_back(b[j]);
				i++;
				j++;
			}
		}
		for(; i < n; ++i)
			uni.push_back(a[i]);
		for(; j < m; ++j)
				uni.push_back(b[j]);
		for(int k = 0; k < uni.size(); ++k)
			cout << uni[k] << " ";
		cout << endl;
		for(int k = 0; k < inter.size(); ++k)
			cout << inter[k] << " ";
		cout << endl;
	}
	return 0;
}