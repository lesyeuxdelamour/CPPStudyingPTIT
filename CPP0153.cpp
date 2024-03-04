#include <iostream>
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
		ll n, k, sum;
		cin >> n >> k;
		ll a = k - 1;
		ll b = n % k;
		ll sum = a * (a + 1) / 2 * (n / k) + b * (b + 1) / 2;
		cout << sum << endl;
	}
	return 0;
}