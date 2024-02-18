#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;
using ll = long long;

bool check(ll n, ll k)
{
	ll sum = 0;
	for(int i = 1; i <= n; ++i)
		sum += i % k;
	return sum == k;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n, k;
		cin >> n >> k;
		cout << check(n, k) << endl;
	}
	return 0;
}