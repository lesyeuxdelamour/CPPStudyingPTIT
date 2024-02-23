#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m, x, sum;
		cin >> n >> m;
		int a[n + 1], b[m + 1];
		a[0] = b[0] = 0;
		for(int i = 1; i <= n; ++i)
		{
			cin >> x;
			a[i] = a[i - 1] + x;
		}
		for(int i = 1; i <= m; ++i)
		{
			cin >> x;
			b[i] = b[i - 1] + x;
		}
		sum = max(a[n], b[m]);
		for(int i = 1; i <= min(m, n); ++i)
			sum = max(max(a[i] + b[m] - b[i], b[i] + a[n] - a[i]), sum);
		cout << sum << endl;
	}
	return 0;
}