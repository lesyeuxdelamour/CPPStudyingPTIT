#include <iostream>
#include <iomanip>
#include <algorithm>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	ll a, b, c, d, m, n, p;
	cin >> a >> b >> c >> d;
	m = b - a;
	n = c - b;
	p = d - c;
	cout << __gcd(m, __gcd(n, p));
	return 0;
}