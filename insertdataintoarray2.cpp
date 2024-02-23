#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	int t, test = 0;
	cin >> t;
	while(test++ < t)
	{
		int n, m, k;
		cin >> n >> m >> k;
		int a[n], b[m];
		for(auto &x : a)
			cin >> x;
		for(auto &x : b)
			cin >> x;
		cout << "Test " << test << ":\n";
		for(int i = 0; i < k; ++i)
			cout << a[i] << " ";
		for(int j = 0; j < m; ++j)
			cout << b[j] << " ";
		for(int i = k; i < n; ++i)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}