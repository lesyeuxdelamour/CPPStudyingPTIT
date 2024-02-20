#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;
using ll = long long;

int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int coin(int n)
{
	int cnt = 0, index = 9;
	while(n)
	{
		cnt += n / a[index];
		n %= a[index];
		index--;
	}
	return cnt;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << coin(n) << endl;
	}
	return 0;
}