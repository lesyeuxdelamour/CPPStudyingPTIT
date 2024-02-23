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
		int n, l, r;
		cin >> n;
		int a[n];
		for(auto &x : a)
			cin >> x;
		cin >> l >> r;
		int cnt = 0, flag = 1;
		for(int i = l; i < r; ++i)
		{
			if(a[i + 1] < a[i] && flag == 1)
				flag = -1;
			if(a[i + 1] > a[i] && flag == -1)
			{
				flag = 0;
				break;
			}
		}
		if(flag)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}