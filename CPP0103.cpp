#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	faster();
	double sum = 0;
	int n;
	cin >> n;
	for(int i = 1; i <= n; ++i)
		sum += (double)1 / i;
	cout << fixed << setprecision(4) << sum;
	return 0;
}