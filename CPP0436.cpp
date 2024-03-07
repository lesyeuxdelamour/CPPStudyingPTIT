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
		vector<int> a(n), b(n);
		for(int i = 0; i < n; ++i)
		{
			cin >> a[i];
			b[i] = a[i];	
		}
		sort(b.begin(), b.end());
		for(int i = 0; i < n; ++i)
		{
			int pos = upper_bound(b.begin(), b.end(), a[i]) - b.begin();
			if(pos == n)
				cout << "_ ";
			else
				cout << b[pos] << " ";
		}
		cout << endl;
	}
	return 0;
}
