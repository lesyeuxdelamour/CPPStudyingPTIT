#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;
using ll = long long;

bool check(char a[21][21], int x, int y, int k)
{
	for(int i = x; i < x + k; ++i)
		if(a[i][y] == 'O' || a[i][y + k - 1] == 'O')
			return 0;
	for(int j = y; j < y + k; ++j)
		if(a[x][j] == 'O' || a[x + k - 1][j] == 'O')
			return 0;
	return 1; 
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		char a[21][21];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++j)
				cin >> a[i][j];
		for(int k = n; k > 0; --k)
		{
			int flag = 0;
			for(int i = 0; i <= n - k; ++i)
			{
				for(int j = 0; j <= n - k; ++j)
					if(check(a, i, j, k))
					{
						flag = 1;
						break;
					}
				if(flag)
					break;
			}
			if(flag)
			{
				cout << k << endl;
				break;
			}
		}
	}
	return 0;
}