#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;
using ll = long long;

ll final(ll n)
{
	if(n < 10)
		return n;
	ll sum = 0;
	while(n)
	{
		sum += n % 10;
		n /= 10;
	}
	return final(sum);
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		cout << final(n) << endl;
	}
	return 0;
}