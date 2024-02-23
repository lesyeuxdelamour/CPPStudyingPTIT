#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	int n;
	cin >> n;
	int a[n][n];
	int cnt = 1;
	for(int j = n - 1; j >= 0; --j)
	{
		int col = j;
		for(int i = 0; i < n - j; ++i, ++col)
			a[i][col] = cnt++; 
	}
	for(int i = 1; i < n; ++i)
	{
		int row = i;
		for(int j = 0; j < n - i; ++j, ++row)
			a[row][j] = cnt++;
	}
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}