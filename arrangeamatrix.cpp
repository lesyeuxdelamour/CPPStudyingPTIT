#include <iostream>
#include <iomanip>
#include <algorithm>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	int a[m + 1][n + 1];
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < m; ++j)
			cin >> a[j][i];
	sort(a[k - 1], a[k - 1] + n);
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
			cout << a[j][i] << " ";
		cout << endl;
	}
	return 0;
}