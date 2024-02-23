#include <iostream>
#include <iomanip>
#include <algorithm>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	ll a, b, c, d, m, n, p, q, r, s;
	cin >> a >> b >> c >> d;
	m = d - c;
	n = d - b;
	p = d - a;
	q = c - b;
	r = c - a;
	s = b - a;
	cout << __gcd(m, __gcd(n, __gcd(p, __gcd(q, __gcd(r, s)))));
	return 0;
}