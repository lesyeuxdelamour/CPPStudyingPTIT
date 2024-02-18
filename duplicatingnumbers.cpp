#include <iostream>
#include <iomanip>
#include <string>
#define endl "\n"

using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
	ll tmp;
	while(b)
	{
		tmp = a%b;
		a = b;
		b = tmp;
	}
	return a;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll a, x, y;
		cin >> a >> x >> y;
		ll time = gcd(x, y);
		for(int i = 0; i < time; ++i)
			cout << a;
		cout << endl;
	}
	return 0;
}