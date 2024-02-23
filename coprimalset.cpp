#include <iostream>
#include <iomanip>
#include <algorithm>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n, m;
		cin >> n >> m;
		ll sum = n * (n + 1) / 2;
		ll x = (sum + m) / 2;
		ll y = sum - x;
		if(x - y == m && __gcd(x, y) == 1) 
			cout << "Yes";
		else 
			cout << "No";
		cout << endl;
	}
	return 0;
}