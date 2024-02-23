#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	int n, m, k;
	cin >> n >> m;
	int a[n], b[m];
	for(auto &x : a)
		cin >> x;
	for(auto &x : b)
		cin >> x;
	cin >> k;
	for(int i = 0; i < k; ++i)
		cout << a[i] << " ";
	for(int j = 0; j < m; ++j)
		cout << b[j] << " ";
	for(int i = k; i < n; ++i)
		cout << a[i] << " ";
	return 0;
}