#include <iostream>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		ll sum = 0;
		for(int i = 1; i <= n; ++i)
			sum += i;
		cout << sum << endl;
	}
	return 0;
}