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
		int a, m, flag = 1;
		cin >> a >> m;
		for(int i = 0; i < m; ++i)
			if((a * i) % m == 1)
			{
				cout << i << endl;
				flag = 0;
				break;
			}
		if(flag)
			cout << -1 << endl;
	}
	return 0;
}