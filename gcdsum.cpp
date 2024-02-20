#include <iostream>
#include <iomanip>
#include <algorithm>
#define endl "\n"

using namespace std;
using ll = long long;

ll sumDigit(ll n)
{
	ll sum = 0;
	while(n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

ll gcdSum(ll n)
{
	while(__gcd(n, sumDigit(n)) == 1)
		n++;
	return n;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		cout << gcdSum(n) << endl;
	}
	return 0;
}