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
		int n;
		cin >> n;
		int a[n][n], row[n] = {}, col[n] = {}, sum = 0, sumAll = 0;
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++j)
			{
				cin >> a[i][j];
				row[i] += a[i][j];
				col[j] += a[i][j];
				sumAll += a[i][j];
			}
		for(int i = 0; i < n; ++i)
			sum = max(max(row[i], col[i]), sum);
		cout << sum * n - sumAll << endl;
	}
	return 0;
}