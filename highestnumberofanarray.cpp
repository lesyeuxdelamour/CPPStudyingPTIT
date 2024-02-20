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
		int n, k;
		cin >> n >> k;
		int a[n];
		for(auto &x : a)
			cin >> x;
		for(int i = k - 1; i < n; ++i)
		{
			int max = a[i];
			for(int j = i - k; j < i; ++j)
				if(a[j] > max)
					max = a[j];
			cout << max << " ";
		}
		cout << endl;
	}
	return 0;
}