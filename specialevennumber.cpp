#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;
using ll = long long;

bool isSpecialEven(ll n)
{
	while(n)
	{
		if(n % 10 & 1)
			return 0;
		n /= 10;
	}
	return 1;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		if(n & 1)
			cout << "NO\n";
		else
			cout << (isSpecialEven(n) ? "YES\n" : "NO\n");
	}
	return 0;
}