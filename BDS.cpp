#include <iostream>
#include <iomanip>
#include <algorithm>
#define endl "\n"

using namespace std;
using ll = long long;

int check(int n)
{
	while(n % 2 == 0)
		n /= 2;
	while(n % 3 == 0)
		n /= 3;
	return n;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x, y;
		cin >> x >> y;
		cout << (check(x) == check(y) ? "YES\n" : "NO\n");
	}
	return 0;
}