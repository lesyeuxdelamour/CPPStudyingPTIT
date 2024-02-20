#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;
using ll = long long;

bool isSpecial(ll n)
{
	int sum = 0;
	while(n)
	{
		sum += n % 10;
		n /= 10;
	}
	for(int i = 2; i * i <= sum; ++i)
		if(sum % i == 0)
			return 0;
	return sum > 1;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		cout << (isSpecial(n) ? n : -1) << endl;
	}
	return 0;
}