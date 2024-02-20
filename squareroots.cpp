#include <iostream>
#include <iomanip>
#include <cmath>
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
		double tmp = 0;
		for(int i = 1; i <= n; ++i)
			tmp = sqrt(tmp) + i;
		cout << setprecision(5) << fixed << sqrt(tmp) << endl;
	}
	return 0;
}