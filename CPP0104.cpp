#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	faster();
	ll sum = 0, tmp = 1;
	int n;
	cin >> n;
	for(int i = 1; i <= n; ++i)
	{
		tmp *= i;
		sum += tmp;
	}
	cout << sum;
	return 0;
}