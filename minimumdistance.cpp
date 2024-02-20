#include <iostream>
#include <iomanip>
#include <algorithm>
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
		int a[n], d[n - 1];
		for(auto &x : a)
			cin >> x;
		sort(a, a + n);
		int minDiff = 1e3;
		for(int i = 1; i < n; ++i)
			minDiff = min(a[i] - a[i - 1], minDiff);
		cout << minDiff << endl;
	}
	return 0;
}