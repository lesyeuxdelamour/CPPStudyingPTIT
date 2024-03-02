#include <bits/stdc++.h>
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a, x, y;
		cin >> a >> x >> y;
		int gcd = __gcd(x, y);
		for(int i = 0; i < gcd; ++i)
			cout << a;
		cout << endl;
	}
	return 0;
}