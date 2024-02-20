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
		int a[n];
		for(auto &x : a)
			cin >> x;
		int min_val = a[0], res = -1e5;
		for(int i = 0; i < n; ++i)
		{
			if(a[i] > min_val)
				res = max(res, a[i] - min_val);
			min_val = min(min_val, a[i]);
		}
		if(res == -1e5)
			cout << "-1\n";
		else
			cout << res << endl;
	}
	return 0;
}