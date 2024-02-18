#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	ll fac[21];
	fac[0] = fac[1] = 1;
	for(int i = 2; i <= 20; ++i)
		fac[i] = fac[i - 1] * i;
	int n;
	ll ans = 0;
	cin >> n;
	for(int i = 1; i <= n; ++i)
		ans += fac[i];
	cout << ans;
	return 0;
}