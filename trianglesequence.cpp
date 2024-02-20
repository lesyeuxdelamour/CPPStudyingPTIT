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
		int n, MAX = 0;
		cin >> n;
		int a[n];
		for(auto &x : a)
		{
			cin >> x;
			MAX = max(x, MAX);
		}
		cout << MAX << endl;
	}
	return 0;
}