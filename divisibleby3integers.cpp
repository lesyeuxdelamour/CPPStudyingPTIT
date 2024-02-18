#include <iostream>
#include <iomanip>
#include <cmath>
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
		int x, y, z, n;
		cin >> x >> y >> z >> n;
		ll ans = x * y / gcd(x, y);
		ans = ans * z / gcd(ans, z);
		ll l = (ll)pow(10, n - 1);
		ll r = (ll)pow(10, n);
		if(ans >= r)
			cout << "-1\n";
		else
		{
		    ll tmp = l % ans;
			if(tmp == 0)
				cout << l << endl;
			else
				cout << l + ans - tmp << endl;
		}
	}
	return 0;
}